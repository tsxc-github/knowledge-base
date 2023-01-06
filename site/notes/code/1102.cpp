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
    cin>>m;
    for(long long i=0;i<n;i++)
    if(a[i]==m)x++;
    cout<<x;
}
