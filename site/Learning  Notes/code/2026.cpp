#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
long long jx(long long a,long long b){//a为a!,b=1
    
    if(a!=0){
        b=b*a--;
        b=jx(a,b);
        return b;}
    else {
        return b;}}
int main(){
    long long a,b,c,e=0;
    cin>>a;
    for(long long i=1;i<=a;i++){
        e+=jx(i,1);

    }
    printf("%ld",e);

}