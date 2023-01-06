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
LL v,n;
LL *a;
LL ans=114514;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>v>>n;
    a=new LL [n];
    for(LL i=0;i<n;i++){
        cin>>a[i];
    }
    LL dp[MAX]={};
    for(LL i=0;i<n;i++){
        for(LL j=v;j>=a[i];j--){
            if(dp[j]<dp[j-a[i]]+a[i])
            dp[j]=dp[j-a[i]]+a[i];
        }
    }
    printf("%lld",v-dp[v]);
    return 0;
}
