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
void swap(LL &a,LL &b){
    LL t;
    t=a;
    a=b;
    b=t;}

int main(){
    LL n,m,z,x=0,y;
    cin>>n>>m;
    LL *k,*s;
    k=new LL [n];
    s=new LL [n];
    for(LL i=0;i<n;i++)
    cin>>k[i]>>s[i];
    bool temp=true;
    while(temp==true){//冒泡
        temp=false;
        for(LL i=1;i<n;i++){
            if(s[i-1]<s[i]){
                swap(s[i-1],s[i]);
                swap(k[i-1],k[i]);
                temp=true;
            }
            if(s[i-1]==s[i]){
                if(k[i-1]>k[i]){
                    swap(s[i-1],s[i]);
                    swap(k[i-1],k[i]);
                    temp=true;
                }
            }
        }}
    m*=1.5;
    z=s[m-1];
    for(LL i=0;i<n;i++){
        if(s[i]>=z)
        x++;
        else
        break;
        }
    cout<<z<<' '<<x<<endl;
    for(LL i=0;i<x;i++)
        cout<<k[i]<<' '<<s[i]<<endl;
        
    
}
