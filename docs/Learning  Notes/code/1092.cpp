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
    long double a,b,c,e=1;
    cin>>a;
    for(long long i=1;i<=a;i++){
        e+=1.0/jx(i,1);
    }
    printf("%.10Lf",e);

}