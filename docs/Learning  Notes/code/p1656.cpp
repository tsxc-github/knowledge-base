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
struct road{
    LL x,y;
};
LL a[MAX];
LL find(LL x){
    if(a[x]==x)return x;
    return a[x]=find(a[x]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    road r[MAX];
    for(LL i=0;i<m;i++){
        cin>>r[i].x>>r[i].y;
        if(r[i].x>r[i].y)swap(r[i].x,r[i].y);}
    sort(r,r+m,[](road a,road b){if(a.x!=b.x)return a.x<b.x;return a.y<b.y;});
    for(LL i=0;i<m;i++){
        for(LL i=1;i<=n;i++)a[i]=i;
        for(LL j=0;j<m;j++){
            if(j!=i)
            a[find(r[j].x)]=find(r[j].y);}
        LL ans=0;
        for(LL i=1;i<=n;i++){
            if(find(a[i])==i)ans++;
            if(ans>1)break;}
        if(ans!=1)printf("%lld %lld\n",r[i].x,r[i].y);
    }
    return 0;
}