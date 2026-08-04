import pandas as pd
from pathlib import Path

out_excel = Path(r"c:\Users\silam\OneDrive\Documents\CONDENSING UNIT\fileshare\Steady_State_Operating_Data.xlsx")

excel = pd.ExcelFile(out_excel)
print("Sheet names in Excel workbook:")
print(excel.sheet_names)

print("\n--- SUMMARY OPERATING POINTS TAB ---")
df_sum = pd.read_excel(excel, "Summary_Operating_Points")
print(df_sum.to_string(index=False))

print("\n--- SAMPLE SINGLE UNIT STEADY STATE (FIRST 10 ROWS) ---")
df_single = pd.read_excel(excel, "Single_Unit_Steady_State")
print(df_single.head(10).to_string(index=False))

print("\n--- SAMPLE 2-UNIT PARALLEL SYSTEM ---")
df_rln3 = pd.read_excel(excel, "2_Unit_Parallel_System")
print(df_rln3.to_string(index=False))
