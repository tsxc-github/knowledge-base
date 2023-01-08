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
struct cheng{
    LL a,b;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    LL a,b;
    cin>>a>>b;
    cheng c[n];
    for(LL i=0;i<n;i++){
        cin>>c[i].a>>c[i].b;
    }
    sort(c,c+n,[](cheng a,cheng b){
        if(a.a!=b.a)
        return a.a<b.a;
        return a.b<b.b;
    });
    LL maxmoney=-1145141919810;
    LL chengji=a;
    for(LL i=0;i<n;i++){
        maxmoney=max(maxmoney,chengji/c[i].b);
        chengji*=c[i].a;}
    printf("%lld",maxmoney);
    return 0;
}
