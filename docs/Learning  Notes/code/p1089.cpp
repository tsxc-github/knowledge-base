#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#define LL long long
#define LD long double
using namespace std;


    
int main(){
    LL a=0,b=0,x;
    for(LL i=1;i<=12;i++){
        a+=300;
        cin>>x;
        a-=x;
        if(a<0){
            cout<<'-'<<i;
            return 0;
        }
        if(a>=100){
            b+=a/100*100;
            a-=a/100*100;}
    }
    a+=b*1.2;
    cout<<a;
    
}
