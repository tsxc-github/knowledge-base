# -*- coding: UTF-8 -*-
import os

log=open("./cpp_to_md_log.txt",'w',encoding="utf-8")

accept=False
files=os.walk("./docs")
for path,dir_list,file_list in files:
    for file in file_list:
        if(os.path.splitext(file)[-1]==".cpp"):
            try:
                md=open(path+'/'+os.path.splitext(file)[0]+".md",'x',encoding="UTF-8")
            except:
                md=open(path+'/'+os.path.splitext(file)[0]+".md",'r',encoding="UTF-8")
                cpp=open(path+'/'+file,'r',encoding="UTF-8")
                if md.read() != ("```cpp\n"+cpp.read()+"\n```"):
                    log.write("ERROR!Cannot create md file")
                    log.write(path+'/'+file)
                    if accept==True:
                        log.write("auto cover")
                        md.close()
                        md=open(path+'/'+os.path.splitext(file)[0]+".md",'w',encoding="UTF-8")
                    else:
                        print("ERROR!Cannot create md file",path+'/'+file)
                        a=input("Enter \"Y\" to cover,\nEnter \"^C\" to stop,\nEnter \"ALL\" to accept:")
                        if a=="ALL":
                            accept=True
                        if a=="Y" or a=="ALL":
                            log.write("cover")
                            md.close()
                            md=open(path+'/'+os.path.splitext(file)[0]+".md",'w',encoding="UTF-8")
                            pass
                        else:
                            exit(0)
                else:
                    continue
            print(path+'/'+file)
            cpp=open(path+'/'+file,'r',encoding="UTF-8")
            md.write("```cpp\n"+cpp.read()+"\n```")
log.close()
log=open("./cpp_to_md_log.txt",'r',encoding="utf-8")
if log.read()=="":
    log.close()
    log=open("./cpp_to_md_log.txt",'w',encoding="utf-8")
    log.write("run success")
print("cpp to md success")
exit(0)