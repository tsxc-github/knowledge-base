#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
int main(){
    LL n,*a,max,k=-1,z,m;
    cin>>n>>m;
    a=new LL [n];
    for(LL i=0;i<n;i++)
        cin>>a[i];
    for(LL i=1;i<=m;i++){
    cin>>z;
    LL x=lower_bound(a,a+n,z)-a;
    if(a[x]==z)cout<<x+1<<' ';
    else cout<<-1<<' ';
}}
