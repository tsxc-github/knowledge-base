#include<iostream>
#include<cstdio>
#include<iomanip>
#include<math.h>
using namespace std;
    
int main(){
    long long *a,n,m,x=0;
    cin>>n;
    a=new long long [n]();
    for(long long i=0;i<n;i++)cin>>a[i];
    cout<<0<<' ';
    for(long long i=1;i<n;i++){
    for(long long j=0;j<i;j++)
    if(a[i]>a[j])x++;
    cout<<x<<' ';x=0;}
}
