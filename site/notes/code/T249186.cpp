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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    for(LL i=0;i<n;i++){
        LL l,r,x;
        cin>>l>>r>>x;
        LL tot=__gcd(l/x,l+1/x);
        for(LL i=l+2;i<=r;i++){
            tot=__gcd(tot,i/x);
        }
        printf("%lld\n",tot);
    }
    return 0;
}
