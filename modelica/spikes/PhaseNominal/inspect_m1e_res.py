import struct
import numpy as np

def parse_mat4(filepath):
    with open(filepath, 'rb') as f:
        content = f.read()
    
    offset = 0
    names = []
    matrices = {}
    
    while offset < len(content):
        if offset + 20 > len(content):
            break
        type_val, rows, cols, imag, name_len = struct.unpack('<iiiii', content[offset:offset+20])
        offset += 20
        
        name_bytes = content[offset:offset+name_len]
        offset += name_len
        name = name_bytes.decode('latin1').rstrip('\x00')
        
        if type_val == 0:  # float64 matrix
            count = rows * cols
            data = np.frombuffer(content[offset:offset+count*8], dtype='<f8')
            offset += count * 8
            matrices[name] = data.reshape((rows, cols), order='F')
        elif type_val == 51:  # char matrix (names)
            count = rows * cols
            char_data = content[offset:offset+count]
            offset += count
            for col in range(cols):
                var_name = char_data[col*rows:(col+1)*rows].decode('latin1').rstrip('\x00').strip()
                names.append(var_name)
        else:
            break
            
    return names, matrices

names, matrices = parse_mat4('modelica/RefrigerationTrainer.ClosedLoopM1eCS_res.mat')
print("Matrix keys in MAT file:", list(matrices.keys()))
dataInfo = matrices.get('dataInfo', None)
if dataInfo is None:
    dataInfo = matrices.get('data_info', None)
if dataInfo is None:
    for k in matrices:
        if 'info' in k.lower():
            print("Found info matrix:", k, matrices[k].shape)
            dataInfo = matrices[k]
            break

targets = [
    'p_suction_pa',
    'p_discharge_pa',
    'm_dot_kg_s',
    'Q_evap_w',
    'Q_cond_w',
    'W_comp_w',
    'superheat_k',
    'subcooling_k',
    'cop'
]

print("\n=================== CLOSED-LOOP M1e SIMULATION RESULTS ===================")
for target in targets:
    if target in names:
        idx = names.index(target)
        col_info = dataInfo[:, idx]
        matrix_num = int(col_info[0])
        var_idx = int(col_info[1]) - 1
        
        data_mat = matrices.get(f'data_{matrix_num}', None)
        if data_mat is not None:
            vals = data_mat[var_idx, :]
            print(f"{target:20s} | t=0s: {vals[0]:12.4f} | t=30s: {vals[-1]:12.4f}")
        else:
            print(f"{target}: missing matrix")
    else:
        print(f"{target}: NOT in names")
print("==========================================================================")
