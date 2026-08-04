import pandas as pd
import numpy as np
from pathlib import Path

fileshare = Path(r"c:\Users\silam\OneDrive\Documents\CONDENSING UNIT\fileshare")
root = Path(r"c:\Users\silam\OneDrive\Documents\CONDENSING UNIT")

p_data2 = fileshare / "data 2.002.csv"
p_data3 = fileshare / "data 2.003.csv"
p_rln3 = root / "RLN3MA.csv"
p_rln5 = root / "RLN5MA.csv"

def extract_single_unit_steady_state(csv_path, dataset_label):
    df = pd.read_csv(csv_path, low_memory=False)
    watts_col = [c for c in df.columns if 'Unit Watts' in c][0]
    disch_t_col = [c for c in df.columns if 'Disch Temp Out of Comp' in c][0]
    suc_t_col = [c for c in df.columns if 'Suction Temp into Comp' in c][0]
    p_suc_col = [c for c in df.columns if 'Suction Pressure' in c][0]
    p_liq_col = [c for c in df.columns if 'Liquid Pressure' in c][0]
    
    df['dT_comp'] = df[disch_t_col] - df[suc_t_col]
    df['is_running'] = (df[watts_col] > 200) & (df['dT_comp'] > 20)
    
    df['run_block'] = (df['is_running'] != df['is_running'].shift()).cumsum()
    running_blocks = df[df['is_running']].groupby('run_block')
    
    records = []
    for block_id, block in running_blocks:
        if len(block) >= 15:
            # take middle 60% of block for steady state
            n = len(block)
            steady = block.iloc[int(n*0.2):int(n*0.8)]
            
            p_suc_std = steady[p_suc_col].std()
            p_liq_std = steady[p_liq_col].std()
            
            if p_suc_std < 2.5 and p_liq_std < 5.0:
                row = {
                    "Dataset": dataset_label,
                    "Block_ID": block_id,
                    "Start_Time": steady['Timestamp'].iloc[0],
                    "End_Time": steady['Timestamp'].iloc[-1],
                    "Duration_min": len(steady),
                    "Suction_Pressure_psig": round(steady[p_suc_col].mean(), 2),
                    "Liquid_Pressure_psig": round(steady[p_liq_col].mean(), 2),
                    "Suction_Press_psia": round(steady[p_suc_col].mean() + 14.696, 2),
                    "Liquid_Press_psia": round(steady[p_liq_col].mean() + 14.696, 2),
                    "Pressure_Ratio_PR": round((steady[p_liq_col].mean() + 14.696) / (steady[p_suc_col].mean() + 14.696), 2),
                    "Compressor_Discharge_Temp_F": round(steady[disch_t_col].mean(), 1),
                    "Compressor_Suction_Temp_F": round(steady[suc_t_col].mean(), 1),
                    "Superheat_F": round(steady['S.H. '].mean(), 1) if 'S.H. ' in steady else np.nan,
                    "Unit_Watts": round(steady[watts_col].mean(), 1),
                    "Air_Into_Evap_F": round(steady['Air Into Evap Left'].mean(), 1) if 'Air Into Evap Left' in steady else np.nan,
                    "Air_Out_Evap_F": round(steady['Ait Out of Evap Left '].mean(), 1) if 'Ait Out of Evap Left ' in steady else np.nan,
                    "Air_Into_Cond_F": round(steady['Air Into Cond Left'].mean(), 1) if 'Air Into Cond Left' in steady else np.nan,
                    "Air_Out_Cond_F": round(steady['Ait Out of Cond Left '].mean(), 1) if 'Ait Out of Cond Left ' in steady else np.nan,
                }
                records.append(row)
    return pd.DataFrame(records)

df_ss2 = extract_single_unit_steady_state(p_data2, "data 2.002.csv (7-Day Run)")
df_ss3 = extract_single_unit_steady_state(p_data3, "data 2.003.csv (24-Hour Run)")

df_single_all = pd.concat([df_ss2, df_ss3], ignore_index=True)

# Parse RLN3MA (2-Unit)
df_rln3 = pd.read_csv(p_rln3)
# filter running rows where both units run
rln3_records = []
for idx, r in df_rln3.iterrows():
    if r['Watts Unit 1'] > 200:
        rln3_records.append({
            "Dataset": "RLN3MA.csv (2-Unit Case)",
            "Timestamp": r['Timestamp'],
            "U1_Suction_Press_psig": r['Suction Pressure Unit 1'],
            "U1_Liquid_Press_psig": r['Liquid Pressure Unit 1'],
            "U1_PR": round((r['Liquid Pressure Unit 1']+14.7)/(r['Suction Pressure Unit 1']+14.7), 2),
            "U1_Watts": r['Watts Unit 1'],
            "U1_Disch_Temp_F": r['Disch Temp Out of Comp U1'],
            "U2_Suction_Press_psig": r['Suction Pressure Unit 2'],
            "U2_Liquid_Press_psig": r['Liquid Pressure Unit 2'],
            "U2_PR": round((r['Liquid Pressure Unit 2']+14.7)/(r['Suction Pressure Unit 2']+14.7), 2),
            "U2_Watts": r['Watts Unit 2'],
            "U2_Disch_Temp_F": r['Disch Temp Out of Comp U2'],
        })
df_rln3_out = pd.DataFrame(rln3_records)

# Parse RLN5MA (3-Unit)
df_rln5 = pd.read_csv(p_rln5)
rln5_records = []
for idx, r in df_rln5.iterrows():
    if r['Unit 1 Watts'] > 200:
        rln5_records.append({
            "Dataset": "RLN5MA.csv (3-Unit Case)",
            "Timestamp": r['Timestamp'],
            "U1_Suction_Press_psig": r['Suction Pressure 1'],
            "U1_Liquid_Press_psig": r['Liquid Pressure 1'],
            "U1_PR": round((r['Liquid Pressure 1']+14.7)/(r['Suction Pressure 1']+14.7), 2),
            "U1_Watts": r['Unit 1 Watts'],
            "U2_Suction_Press_psig": r['Suction Pressure 2'],
            "U2_Liquid_Press_psig": r['Liquid Pressure 2'],
            "U2_PR": round((r['Liquid Pressure 2']+14.7)/(r['Suction Pressure 2']+14.7), 2),
            "U2_Watts": r['Unit 2 Watts'],
            "U3_Suction_Press_psig": r['Suction Pressure 3'],
            "U3_Liquid_Press_psig": r['Liquid Pressure 3'],
            "U3_PR": round((r['Liquid Pressure 3']+14.7)/(r['Suction Pressure 3']+14.7), 2),
            "U3_Watts": r['Unit 3 Watts'],
        })
df_rln5_out = pd.DataFrame(rln5_records)

# Summary table
summary_data = [
    {
        "System Type": "Single Unit (Low-Temp)",
        "Source File": "data 2.002.csv & data 2.003.csv",
        "Steady-State Windows": len(df_single_all),
        "Avg Suction Pressure (psig)": round(df_single_all['Suction_Pressure_psig'].mean(), 2),
        "Avg Liquid Pressure (psig)": round(df_single_all['Liquid_Pressure_psig'].mean(), 2),
        "Avg Pressure Ratio (PR)": round(df_single_all['Pressure_Ratio_PR'].mean(), 2),
        "Avg Compressor Watts (W)": round(df_single_all['Unit_Watts'].mean(), 1),
        "Avg Discharge Temp (°F)": round(df_single_all['Compressor_Discharge_Temp_F'].mean(), 1),
    },
    {
        "System Type": "2-Unit Parallel System",
        "Source File": "RLN3MA.csv",
        "Steady-State Windows": len(df_rln3_out),
        "Avg Suction Pressure (psig)": round(df_rln3_out['U1_Suction_Press_psig'].mean(), 2),
        "Avg Liquid Pressure (psig)": round(df_rln3_out['U1_Liquid_Press_psig'].mean(), 2),
        "Avg Pressure Ratio (PR)": round(df_rln3_out['U1_PR'].mean(), 2),
        "Avg Compressor Watts (W)": round(df_rln3_out['U1_Watts'].mean(), 1),
        "Avg Discharge Temp (°F)": round(df_rln3_out['U1_Disch_Temp_F'].mean(), 1),
    },
    {
        "System Type": "3-Unit Parallel System",
        "Source File": "RLN5MA.csv",
        "Steady-State Windows": len(df_rln5_out),
        "Avg Suction Pressure (psig)": round(df_rln5_out['U1_Suction_Press_psig'].mean(), 2),
        "Avg Liquid Pressure (psig)": round(df_rln5_out['U1_Liquid_Press_psig'].mean(), 2),
        "Avg Pressure Ratio (PR)": round(df_rln5_out['U1_PR'].mean(), 2),
        "Avg Compressor Watts (W)": round(df_rln5_out['U1_Watts'].mean(), 1),
        "Avg Discharge Temp (°F)": "N/A",
    }
]
df_summary = pd.DataFrame(summary_data)

# Save to Excel
out_excel = fileshare / "Steady_State_Operating_Data.xlsx"
with pd.ExcelWriter(out_excel, engine='openpyxl') as writer:
    df_summary.to_excel(writer, sheet_name="Summary_Operating_Points", index=False)
    df_single_all.to_excel(writer, sheet_name="Single_Unit_Steady_State", index=False)
    df_rln3_out.to_excel(writer, sheet_name="2_Unit_Parallel_System", index=False)
    df_rln5_out.to_excel(writer, sheet_name="3_Unit_Parallel_System", index=False)

print(f"\nSuccessfully generated Excel workbook: {out_excel}")
