#include<iostream>
#include<cstdio>
#include<cctype>

using namespace std;
long long a,b,c,n,x,y,*d,k;
bool panduan(int i){
    if(i%4==0){
    if(i%100==0){
    if(i%400==0)return true;
    else return false;}
    else return true;}
    else return false;}
    
int main(){
    cin>>a>>b;
    d=new long long[1123];
    k=0;
    for(long long i=a;i<=b;i++){
        if(panduan(i)){++c;d[k]=i;++k;}}
    cout<<k<<endl;
    for(long long i=0;i<k;i++){
        cout<<d[i]<<' ';
    }
    
}
