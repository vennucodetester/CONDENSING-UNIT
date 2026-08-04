import csv

csv_path = 'modelica/RefrigerationTrainer.ClosedLoopM1eCS_res.csv'

targets = [
    'p_suction_pa',
    'p_discharge_pa',
    'm_dot_kg_s',
    'Q_evap_w',
    'Q_cond_w',
    'W_comp_w',
    'superheat_k',
    'subcooling_k',
    'cop',
    'T_evap_sat_k',
    'T_cond_sat_k'
]

with open(csv_path, 'r') as f:
    reader = csv.reader(f)
    header = next(reader)
    # Strip quotes from header column names
    header = [col.strip('"').strip() for col in header]
    
    rows = list(reader)
    
first_row = rows[0]
last_row = rows[-1]

print("=================== CLOSED-LOOP M1e PHYSICAL SIMULATION RESULTS ===================")
print(f"Total time steps recorded: {len(rows)}")

for target in targets:
    if target in header:
        idx = header.index(target)
        val_0 = float(first_row[idx])
        val_end = float(last_row[idx])
        print(f"{target:20s} | t=0s: {val_0:12.4f} | t=30s: {val_end:12.4f}")
    else:
        # Search case-insensitive or partial
        matches = [h for h in header if target in h]
        if matches:
            idx = header.index(matches[0])
            val_0 = float(first_row[idx])
            val_end = float(last_row[idx])
            print(f"{matches[0]:20s} | t=0s: {val_0:12.4f} | t=30s: {val_end:12.4f}")
        else:
            print(f"{target:20s} | NOT FOUND")
print("===================================================================================")
