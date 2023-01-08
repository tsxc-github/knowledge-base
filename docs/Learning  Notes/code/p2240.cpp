#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
struct jinbi
{
    LL m,u;
}a[200];
bool cmp(jinbi a,jinbi b){
    return (double)a.u/a.m>(double)b.u/b.m;}
int main(){
    ios::sync_with_stdio(false);
    double ans=0;
    LL n,t,m,u;
    cin>>n>>t;
    for(LL i=0;i<n;i++){
        cin>>m>>u;
        a[i].m=m;
        a[i].u=u;}
    sort(a,a+n,cmp);
    for(LL i=0;i<n;i++){
        if(t>=a[i].m){
            ans+=a[i].u;
            t-=a[i].m;}
        else if(t>0){
            ans+=(double)t*a[i].u/a[i].m;
            t=0;break;}
        else break;}
    printf("%.2lf",ans);
}
