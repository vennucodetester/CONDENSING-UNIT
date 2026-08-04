import struct
import numpy as np

def parse_all_mat4(filepath):
    with open(filepath, 'rb') as f:
        content = f.read()
    
    offset = 0
    matrices = {}
    
    while offset < len(content):
        if offset + 20 > len(content):
            break
        type_val, rows, cols, imag, name_len = struct.unpack('<iiiii', content[offset:offset+20])
        offset += 20
        
        name_bytes = content[offset:offset+name_len]
        offset += name_len
        name = name_bytes.decode('latin1').rstrip('\x00')
        print(f"Matrix '{name}': type_val={type_val}, rows={rows}, cols={cols}")
        
        if type_val in (0, 20, 10, 100):  # numeric matrix
            elem_size = 4 if type_val in (20, 100) else 8
            count = rows * cols
            data = np.frombuffer(content[offset:offset+count*elem_size], dtype='<i4' if type_val in (20, 100) else '<f8')
            offset += count * elem_size
            matrices[name] = data.reshape((rows, cols), order='F')
        elif type_val == 51:  # char matrix (names)
            count = rows * cols
            char_data = content[offset:offset+count]
            offset += count
            var_names = []
            for col in range(cols):
                vname = char_data[col*rows:(col+1)*rows].decode('latin1').rstrip('\x00').strip()
                var_names.append(vname)
            matrices[name] = var_names
        else:
            print(f"Unknown type_val {type_val} at offset {offset}")
            elem_size = 8
            count = rows * cols
            offset += count * elem_size
            
    return matrices

m = parse_all_mat4('modelica/RefrigerationTrainer.ClosedLoopM1eCS_res.mat')
print("Keys in MAT:", list(m.keys()))

names = m.get('name', [])
dataInfo = m.get('dataInfo', None)
data_2 = m.get('data_2', None)

print(f"Total variables: {len(names)}")
if dataInfo is not None:
    print(f"dataInfo shape: {dataInfo.shape}")
if data_2 is not None:
    print(f"data_2 shape: {data_2.shape}")

targets = [
    'p_suction_pa', 'p_discharge_pa', 'm_dot_kg_s',
    'Q_evap_w', 'Q_cond_w', 'W_comp_w',
    'superheat_k', 'subcooling_k', 'cop'
]

print("\n=================== SIMULATED PHYSICAL TRAJECTORIES ===================")
for target in targets:
    if target in names:
        idx = names.index(target)
        col_info = dataInfo[:, idx]
        matrix_num = int(col_info[0])
        var_idx = int(col_info[1]) - 1
        
        data_mat = m.get(f'data_{matrix_num}', None)
        if data_mat is not None:
            vals = data_mat[var_idx, :]
            print(f"{target:20s} | t=0s: {vals[0]:12.4f} | t=30s: {vals[-1]:12.4f}")
        else:
            print(f"{target}: missing data matrix data_{matrix_num}")
    else:
        print(f"{target}: NOT found in names list")
print("==========================================================================")
