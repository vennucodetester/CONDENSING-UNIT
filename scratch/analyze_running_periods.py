import pandas as pd
import numpy as np
from pathlib import Path

fileshare = Path(r"c:\Users\silam\OneDrive\Documents\CONDENSING UNIT\fileshare")
root = Path(r"c:\Users\silam\OneDrive\Documents\CONDENSING UNIT")

p2 = fileshare / "data 2.002.csv"
p3 = fileshare / "data 2.003.csv"

df2 = pd.read_csv(p2, low_memory=False)

print("--- DATA 2.002.CSV RUNNING STATE DIAGNOSTICS ---")
print("Columns summary:")
watts_col = [c for c in df2.columns if 'Unit Watts' in c][0]
disch_t_col = [c for c in df2.columns if 'Disch Temp Out of Comp' in c][0]
suc_t_col = [c for c in df2.columns if 'Suction Temp into Comp' in c][0]
p_suc_col = [c for c in df2.columns if 'Suction Pressure' in c][0]
p_liq_col = [c for c in df2.columns if 'Liquid Pressure' in c][0]

df2['dT_comp'] = df2[disch_t_col] - df2[suc_t_col]
df2['is_running'] = (df2[watts_col] > 200) & (df2['dT_comp'] > 20)

print(f"Total rows: {len(df2)}")
print(f"Total running rows: {df2['is_running'].sum()}")

# Identify contiguous running periods
df2['run_block'] = (df2['is_running'] != df2['is_running'].shift()).cumsum()
running_blocks = df2[df2['is_running']].groupby('run_block')

print("\nLongest contiguous running periods (>15 mins):")
steady_windows = []
for block_id, block in running_blocks:
    if len(block) >= 15:
        ts_start = block['Timestamp'].iloc[0]
        ts_end = block['Timestamp'].iloc[-1]
        p_suc_mean = block[p_suc_col].mean()
        p_suc_std = block[p_suc_col].std()
        p_liq_mean = block[p_liq_col].mean()
        p_liq_std = block[p_liq_col].std()
        watts_mean = block[watts_col].mean()
        disch_t_mean = block[disch_t_col].mean()
        suc_t_mean = block[suc_t_col].mean()
        
        print(f"Block {block_id:4d}: {len(block):3d} mins | {ts_start} -> {ts_end} | p_suc={p_suc_mean:5.1f}±{p_suc_std:3.1f} psig | p_liq={p_liq_mean:5.1f}±{p_liq_std:3.1f} psig | Watts={watts_mean:5.1f} W | T_disch={disch_t_mean:5.1f}°F")
        
        # Check steady state (std < 3.0 psig)
        if p_suc_std < 3.0 and p_liq_std < 5.0:
            # take middle 50% of the block as clean steady state
            n = len(block)
            sub_block = block.iloc[int(n*0.25):int(n*0.75)]
            steady_windows.append((block_id, sub_block))

print(f"\nFound {len(steady_windows)} clean steady-state windows!")
