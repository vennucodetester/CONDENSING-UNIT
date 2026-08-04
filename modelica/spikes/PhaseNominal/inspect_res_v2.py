import struct
import numpy as np

def read_mat4(filepath):
    with open(filepath, 'rb') as f:
        content = f.read()
    
    offset = 0
    names = []
    data_matrices = {}
    
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
            data_matrices[name] = data.reshape((rows, cols), order='F')
        elif type_val == 51:  # char matrix (names)
            count = rows * cols
            char_data = content[offset:offset+count]
            offset += count
            # Matrix of names: rows = string length, cols = number of variables
            # Each column is a variable name!
            for col in range(cols):
                var_name = char_data[col*rows:(col+1)*rows].decode('latin1').rstrip('\x00').strip()
                names.append(var_name)
        else:
            print(f"Unknown type_val {type_val} at offset {offset}")
            break
            
    return names, data_matrices

names, m = read_mat4('modelica/RefrigerationTrainer.ClosedLoopM1eCS_res.mat')
print("Extracted variable names count:", len(names))

dataInfo = m.get('dataInfo', None)
data_2 = m.get('data_2', None)
data_1 = m.get('data_1', None)

targets = [
    'p_suction_pa', 'p_discharge_pa', 'm_dot_kg_s',
    'Q_evap_w', 'Q_cond_w', 'W_comp_w',
    'superheat_k', 'subcooling_k', 'cop'
]

for target in targets:
    if target in names:
        idx = names.index(target)
        if dataInfo is not None:
            col_info = dataInfo[:, idx]
            matrix_num = int(col_info[0])
            var_idx = int(col_info[1]) - 1 # 1-indexed
            
            data_mat = m.get(f'data_{matrix_num}', None)
            if data_mat is not None and var_idx >= 0 and var_idx < data_mat.shape[0]:
                vals = data_mat[var_idx, :]
                print(f"{target:20s}: t=0: {vals[0]:12.4f}, t_end(30s): {vals[-1]:12.4f}")
            else:
                print(f"{target}: invalid matrix index")
        else:
            print(f"{target}: dataInfo missing")
    else:
        print(f"{target}: NOT found in names")
