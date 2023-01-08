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
LL a[MAX];
LL read(){
LL red=0,sgn=0,ch=getchar();
while(!isdigit(ch)) sgn|=ch=='-'?1:0,ch=getchar();
while(isdigit(ch)) red=red*10+ch-'0',ch=getchar();
return sgn?-red:red;
}
void in(LL x,LL y){
    while(a[x]!=x)x=a[x];
    while(a[y]!=y)y=a[y]; 
    a[x]=a[y];}
bool find(LL x,LL y){
    while(a[x]!=x)x=a[x];
    while(a[y]!=y)y=a[y];
    return x==y;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    while(cin>>n){
    if(n==0)
    return 0;
    cin>>m;
    for(LL i=1;i<=n;i++)a[i]=i;
    LL x,y,z;
    for(LL i=0;i<m;i++){
        x=read(),y=read();
        if(a[x]==-1)a[x]=x;
        if(a[y]==-1)a[y]=y;
        in(x,y);}
    LL ans=0;
    for(LL i=1;i<=n;i++){
        if(a[i]==i)
        ans++;}
    printf("%lld\n",ans-1);}
    return 0;
}
