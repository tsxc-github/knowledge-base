# -*- coding: UTF-8 -*-
import os
import shutil
try:
    shutil.rmtree("./docs/学习笔记/代码/md")
except:
    pass
os.mkdir("./docs/学习笔记/代码/md")

files=os.walk("./docs/学习笔记/代码/cpp")
for path,dir_list,file_list in files:
    for file in file_list:
        open(("./docs/学习笔记/代码/md"+'/'+os.path.splitext(file)[0]+".md"), "w", encoding='UTF-8').write("```cpp\n"+open(path+'/'+file,'r', encoding='UTF-8').read()+"```\n")
        print(os.path.join(path, file) )
print("cpp to md success")