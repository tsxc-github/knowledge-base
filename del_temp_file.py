# -*- coding: UTF-8 -*-
import os

log=open("./del_cppmd_log.txt",'w',encoding="utf-8")

files=os.walk("./docs")
for path,dir_list,file_list in files:
    for file in file_list:
        if(os.path.splitext(file)[-1]==".cpp"):
            log.write("del "+path+'/'+os.path.splitext(file)[0]+".md"+"\n")
            print("del "+path+'/'+os.path.splitext(file)[0]+".md")
            os.remove(path+'/'+os.path.splitext(file)[0]+".md")
print("del cppmd success")