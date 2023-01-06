#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#define LL long long
#define LD long double
using namespace std;


    
int main(){
    LL n,*a;
    cin>>n;
    a=new LL [n];
    for(LL i=0;i<n;i++)cin>>a[i];
    for(LL i=n-1;i>=0;i--)cout<<a[i]<<' ';
}
