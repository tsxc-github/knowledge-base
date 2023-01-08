#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<cmath>
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
const LL MOD=1e9+9;
LL ans(LL n){
    LL now=n-1;
    LL ans=1;
    while(now){
        if(now%2==1){
            ans*=n;
            ans%=MOD;
        }
        n*=n;
        n%=MOD;
        now/=2;
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL T;
    cin>>T;
    while(T--){
        LL n;
        cin>>n;
        printf("%lld\n",ans(n));
    }
}
