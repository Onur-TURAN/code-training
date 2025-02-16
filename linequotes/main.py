file_name = 'line.txt'

with open(file_name, 'r') as f:
    lines = f.readlines()
text = '"'.join([line.strip() +'",\n' for line in text])

with open(file_name,'w') as fnw:
    fnw.write(text)