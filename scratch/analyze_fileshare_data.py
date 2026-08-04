import os
import pandas as pd
import numpy as np
from pathlib import Path

fileshare = Path(r"c:\Users\silam\OneDrive\Documents\CONDENSING UNIT\fileshare")
root = Path(r"c:\Users\silam\OneDrive\Documents\CONDENSING UNIT")

csv_files = [
    fileshare / "data 2.002.csv",
    fileshare / "data 2.003.csv",
    root / "RLN2MA-1.csv",
    root / "RLN3MA.csv",
    root / "RLN5MA.csv",
]

for p in csv_files:
    if not p.exists():
        print(f"FILE NOT FOUND: {p}")
        continue
    print(f"\n=======================================================")
    print(f"ANALYZING FILE: {p.name}")
    print(f"=======================================================")
    
    # read sample rows
    df = pd.read_csv(p, nrows=50)
    print(f"Total columns: {len(df.columns)}")
    cols = list(df.columns)
    
    # check for unit indicators
    u1_cols = [c for c in cols if 'U1' in c or 'Unit 1' in c]
    u2_cols = [c for c in cols if 'U2' in c or 'Unit 2' in c]
    u3_cols = [c for c in cols if 'U3' in c or 'Unit 3' in c]
    
    print(f"Unit 1 cols count: {len(u1_cols)}")
    print(f"Unit 2 cols count: {len(u2_cols)}")
    print(f"Unit 3 cols count: {len(u3_cols)}")
    
    # find pressure and watts columns
    press_cols = [c for c in cols if 'Pressure' in c or 'psig' in c or 'psia' in c]
    watts_cols = [c for c in cols if 'Watt' in c or 'Amp' in c or 'Volt' in c]
    temp_cols = [c for c in cols if 'Temp' in c or 'Discharge Air' in c or 'Suction' in c or 'Disch' in c]
    
    print(f"Pressure columns: {press_cols[:6]}")
    print(f"Watts columns: {watts_cols[:6]}")
    print(f"Sample Temp columns: {temp_cols[:6]}")
    
    # Read full file or chunk to find running windows
    df_full = pd.read_csv(p, low_memory=False)
    print(f"Total rows in file: {len(df_full)}")
    
    # check first/last timestamp
    ts_col = cols[0]
    print(f"Timestamp col: {ts_col}")
    print(f"Time range: {df_full[ts_col].iloc[0]}  --->  {df_full[ts_col].iloc[-1]}")
