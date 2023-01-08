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
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
LL* a=new LL[MAX];
LL* b=new LL[MAX]+MAX;
LL afind(LL x){
    if(a[x]==x)return x;
    return a[x]=afind(a[x]);
}
LL bfind(LL x){
    if(b[x]==x)return x;
    return b[x]=bfind(b[x]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m,p,q,x,y;
    cin>>n>>m>>p>>q;
    for(LL i=1;i<=n;i++)a[i]=i;
    for(LL i=-1;i>=-m;i--)b[i]=i;
    for(LL i=1;i<=p;i++){
        cin>>x>>y;
        a[afind(x)]=afind(y);}
    for(LL i=1;i<=q;i++){
        cin>>x>>y;
        b[bfind(x)]=bfind(y);}
    LL aans=0,bans=0;
    for(LL i=1;i<=n;i++)
        if(afind(i)==afind(1))
        aans++;
    for(LL i=-1;i>=-m;i--)
        if(bfind(i)==bfind(-1))
        bans++;
    cout<<min(aans,bans);
    
    return 0;
}
