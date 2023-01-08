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
    bool *a;
    cin>>n;
    a=new bool [++n]();
    cin>>m;
    for(LL i=1;i<=m;i++){
        cin>>x>>y;
        for(;x<=y;x++){
            a[x]=true;
        }
    }
    for(LL i=0;i<n;i++)
    if(a[i]==false)
    z++;
    cout<<z;
}
