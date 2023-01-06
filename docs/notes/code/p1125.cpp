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
bool zhishu(LL a){
    if(a<2)
    return false;
    if(a==2)
    return true;
    for(LL i=2;i*i<a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    LL i=0;
    char a;
    LL fjklafsd[27]={};
    for(;(a=getchar())!='\n';i++){
        fjklafsd[a-'a']++;
    }
    LL min=114514,max=-114514;
    for(LL i=0;i<26;i++){
        if(fjklafsd[i]>max)
        max=fjklafsd[i];
        if(fjklafsd[i]<min&&fjklafsd[i]!=0)
        min=fjklafsd[i];
    }
    if(zhishu(max-min)){
    cout<<"Lucky Word"<<endl;
    cout<<max-min;}
    else{
    cout<<"No Answer"<<endl;
    cout<<0;}
    
}
