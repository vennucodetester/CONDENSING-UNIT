import struct
import numpy as np

def read_mat4(filepath):
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
        
        name = content[offset:offset+name_len].decode('latin1').rstrip('\x00')
        offset += name_len
        
        if type_val == 0:  # float64
            count = rows * cols
            data = np.frombuffer(content[offset:offset+count*8], dtype='<f8')
            offset += count * 8
            if rows > 0 and cols > 0:
                matrices[name] = data.reshape((rows, cols), order='F')
        elif type_val == 51:  # char array (names)
            count = rows * cols
            char_data = content[offset:offset+count]
            offset += count
            names_raw = [char_data[i::rows].decode('latin1').strip() for i in range(rows)]
            matrices[name] = names_raw
        else:
            # Skip unknown
            break
            
    return matrices

try:
    m = read_mat4('modelica/RefrigerationTrainer.ClosedLoopM1eCS_res.mat')
    for k, v in m.items():
        if isinstance(v, np.ndarray):
            print(f"{k}: shape={v.shape}, dtype={v.dtype}")
        elif isinstance(v, list):
            print(f"{k}: list len={len(v)}, first 5={v[:5]}")
        else:
            print(f"{k}: {type(v)}")
except Exception as e:
    print("Error parsing MAT:", e)
