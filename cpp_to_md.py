# -*- coding: UTF-8 -*-
import os
import shutil
try:
    os.mkdir("./docs/学习笔记/代码/md")
except:
    pass


files=os.walk("./docs")
for path,dir_list,file_list in files:
    for file in file_list:
        if(os.path.splitext(file)[-1]==".cpp"):
            try:
                md=open(path+'/'+os.path.splitext(file)[0]+".md",'x',encoding="UTF-8")
            except:
                md=open(path+'/'+os.path.splitext(file)[0]+".md",'r',encoding="UTF-8")
                cpp=open(path+'/'+file,'r',encoding="UTF-8")
                if md.read() != cpp.read():
                    print("ERROR!Cannot create md file")
                    print(path+'/'+file)
                    exit(0)
                else:
                    continue
            cpp=open(path+'/'+file,'r',encoding="UTF-8")
            md.write(cpp.read())
            print(path+'/'+file)
print("cpp to md success")