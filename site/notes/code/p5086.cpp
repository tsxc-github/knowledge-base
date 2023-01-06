#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#include<queue>
#include<vector>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
struct point{
    LL xy,yz,zq,i;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    point a[n];
    for(LL i=0;i<n;i++){
        LL x,y,z,q;
        cin>>x>>y>>z>>q;
        a[i].xy=y-x;
        a[i].yz=z-y;
        a[i].zq=q-z;
        a[i].i=i+1;
    }
    stable_sort(a,a+n,[](point a,point b){
        if(a.xy!=b.xy)
        return a.xy<b.xy;
        if(a.yz!=b.yz)
        return a.yz<b.yz;
        return a.zq<b.zq;
    });
    LL ans1=1145141919810,ans2=-1145141919810+1;
    for(LL i=1;i<n;i++){
        if(a[i].xy==a[i-1].xy&&a[i].yz==a[i-1].yz&&a[i].zq==a[i-1].zq){
            ans1=min(ans1,a[i].i-a[i-1].i);
            ans2=max(ans2,a[i].i+a[i-1].i);
        }
    }
    printf("%lld %lld",ans1,ans2);
    return 0;
}
