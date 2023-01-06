#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#define LL long long
#define LD long double
using namespace std;


    
int main(){
    LL n,*a,*b,x=0;
    cin>>n;
    a=new LL [n];
    b=new LL [n];
    for(LL i=0;i<n;i++)cin>>a[i];
    for(LL i=0;i<n;i++)cin>>b[i];
    for(LL i=0;i<n;i++)a[i]*=b[i];
    for(LL i=0;i<n;i++)x+=a[i];
    cout<<x;
}
