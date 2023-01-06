#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#define LL long long
#define LD long double
using namespace std;


    
int main(){
    LL n,a=0,b=0,c=0,d=0,temp;
    cin>>n;
    for(LL i=0;i<n;i++){
        cin>>temp;
        if(temp>=0&&temp<=18)
        a++;
        if(temp>=19&&temp<=35)
        b++;
        if(temp>=36&&temp<=60)
        c++;
        if(temp>=61)
        d++;}
    temp=a+b+c+d;
    cout<<fixed<<setprecision(2)<<(double)a/temp*100<<'%'<<endl;
    cout<<fixed<<setprecision(2)<<(double)b/temp*100<<'%'<<endl;
    cout<<fixed<<setprecision(2)<<(double)c/temp*100<<'%'<<endl;
    cout<<fixed<<setprecision(2)<<(double)d/temp*100<<'%'<<endl;
    
    
}
