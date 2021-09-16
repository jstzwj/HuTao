
import os
import glob
import shutil
import re

def main():
    g4_list = ['HuTaoLexer.g4', 'HuTaoParser.g4']
    out = "cppout"
    os.system(f'antlr4 -Dlanguage=Cpp {" ".join(g4_list)} -o {out}')


    files = glob.glob("cppout/HuTao*")
    for file in files:
        if not (file.endswith('.h') or file.endswith('cpp')):
            continue
        if 'Lexer' in  file:
            dir_name = 'Lexer'
        elif 'Parser' in file:
            dir_name = 'Parser'
        
        with open(file, 'r', encoding='utf-8') as f:
            source = f.read()
        source.replace('"antlr4-runtime.h"', '<antlr4-runtime.h>')
        source = re.sub(r'#include "(HuTao.*\.h)"', f'#include <hutao/{dir_name}/\g<1>>', source)

        with open(file, 'w', encoding='utf-8') as f:
            f.write(source)
        
        
        if file.endswith('.h'):
            shutil.copy(file, f"../include/hutao/{dir_name}")
        else:
            shutil.copy(file, f"../source/{dir_name}")

if __name__ == "__main__":
    main()