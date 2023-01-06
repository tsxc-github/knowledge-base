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
    LL n,max,k=0,m,x,y,z=0;
    bool *a,first=false;
    cin>>n;
    a=new bool [n+1]();
    cin>>m;
    for(LL i=1;i<=m;i++)
        for(LL j=i;j<=n;j+=i)
            a[j]=!a[j];
    for(LL i=1;i<=n;i++)
    if(a[i])
        if(first)
            cout<<','<<i;
        else{
            cout<<i;
            first=true;}
    
}
