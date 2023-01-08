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
struct rode{
    LL x,y,t;
};
bool cmp(rode a,rode b){
    return a.t<b.t;
}
rode r[MAX];
LL find(LL x){
    if(a[x]==x)return x;
    return a[x]=find(a[x]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m,k;
    cin>>n>>m>>k;
    for(LL i=1;i<=n;i++)a[i]=i;
    LL x,y,z;
    for(LL i=0;i<m;i++){
        cin>>r[i].x>>r[i].y>>r[i].t;}
    sort(r,r+m,cmp);
    LL ans=0,temp=0;
    for(LL i=1;i<=n;i++){
            if(temp>k)break;
            if(a[i]==i)
            temp++;}
        if(temp==k){cout<<ans;return 0;}
    for(LL j=0;j<m;j++){
        if(a[find(r[j].x)]==find(r[j].y))continue;
        a[find(r[j].x)]=find(r[j].y);
        ans+=r[j].t;temp=0;
        for(LL i=1;i<=n;i++){
            if(temp>k)break;
            if(a[i]==i)
            temp++;}
        if(temp==k){cout<<ans;return 0;}}
    cout<<"No Answer";
    return 0;
}
