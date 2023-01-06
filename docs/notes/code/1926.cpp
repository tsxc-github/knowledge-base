#include<iostream>
#include<cstdio>
#include<iomanip>
#include<math.h>
using namespace std;
    
int main(){
    long long a,b,x[7]={},max,maxx=1;
    for(long long i=0;i<7;i++){
        cin>>a>>b;
        if(a+b>8){
            x[i]=a+b-8;
        }
    }
    max=-114514;
    for(long long i=0;i<7;i++){
        if(x[i]>max){
            max=x[i];
            maxx=i+1;
        }
    }
    if(max==0)
        maxx=0;
    cout<<maxx;
}
