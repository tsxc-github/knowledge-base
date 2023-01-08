#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<cctype>
#define LL long long
#define LD long double
using namespace std;
int main(){
    LL n,s,z=0;
    cin>>n>>s;
    LL a,b;
    cin>>a>>b;
    a+=b;
    short *x,*y;
    x=new short [n];
    y=new short [n];
    for(LL i=0;i<n;i++){
        cin>>x[i]>>y[i];
        if(x[i]>a){
        i-=1;
        n-=1;}}
    bool temp=true;
    while(temp==true){//冒泡
        temp=false;
        for(LL i=1;i<n;i++){
            if(y[i-1]>y[i]){
                swap(y[i-1],y[i]);
                temp=true;
            }
        }}
    for(LL i=0;i<n;i++){
        s-=y[i];
        if(s<0)
        break;
        z++;
    }
    cout<<z;

}
