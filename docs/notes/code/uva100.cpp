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
LL jisuan(LL a){
    LL ans=1;
    while(a!=1){
        ans++;
        if(a&1)
        a=3*a+1;
        else
        a=a/2;}
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    while(cin>>n>>m){
        LL maxx=LLONG_MIN;
        for(LL i=n;i<=m;i++){
            maxx=max(maxx,jisuan(i));}
        printf("%lld %lld %lld \n",n,m,maxx);}
    return 0;
}
