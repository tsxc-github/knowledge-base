#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
bool a[10];
void ab(){
    LL x,y,z;
    
    for(LL i1=1;i1<=9;i1++){
        a={};
        if(a[i1]==true)
        continue;
        a[i1]=true;
        for(LL j1=1;j1<=9;j1++){
            if(a[j1]==true)
            continue;
            a[j1]=true;
            for(LL k1=1;k1<=9;k1++){
                if(a[k1]==true)
                continue;
                a[k1]=true;
                x=i1*100+j1*10+k1;
                    for(LL i2=1;i2<=9;i2++){
                        if(a[i1]==true)
                        continue;
                        a[i2]=true;
                        for(LL j2=1;j2<=9;j2++){
                            if(a[i1]==true)
                            continue;
                            a[j2]=true;
                            for(LL k2=1;k2<=9;k2++){
                                if(a[i1]==true)
                                continue;
                                a[k2]=true;
                                y=i2*100+j2*10+k2;
                                    for(LL i3=1;i3<=9;i3++){
                                        if(a[i1]==true)
                                        continue;
                                        a[i3]=true;
                                        for(LL j3=1;j3<=9;j3++){
                                            if(a[i1]==true)
                                            continue;
                                            a[j3]=true;
                                            for(LL k3=1;k3<=9;k3++){
                                                if(a[i1]==true)
                                                continue;
                                                a[k3]=true;
                                                z=i3*100+j3*10+k3;
                                                for(LL i=1;i<=9;i++){
                                                    if(a[i]==false){
                                                        
                                                    }
                                                }
                                                if(x*6==y*3&&y*3==z*2)
                                                printf("%ld %ld %ld\n",x,y,z);
                                            }
                                        }
                                    }
                            }
                        }
                    }
            }
        }
    }
    
}
int main(){

    ab();
}
