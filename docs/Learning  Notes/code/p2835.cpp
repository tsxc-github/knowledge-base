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
LL find(LL x){
    if(a[x]==x)return x;
    return a[x]=find(a[x]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    for(LL i=1;i<=n;i++)a[i]=i;
    int dp[n+1][n+1];
    memset(dp,0,sizeof(dp));
    for(LL i=1;i<=n;i++){
        LL t;
        cin>>t;
        while(t!=0){
            dp[i][t]=true;
            cin>>t;
        }
    }
    for(LL i=1;i<=n;i++)
        dp[i][i]=true;
    for(LL k=1;k<=n;k++)
        for(LL i=1;i<=n;i++)
            for(LL j=1;j<=n;j++)
                dp[i][j]=max(dp[i][k]&dp[k][j],dp[i][j]);
    for(LL i=1;i<=n;i++)
        for(LL j=1;j<=n;j++)
            if(dp[i][j]==true)
                a[j]=a[i];
    LL ans=0;
    for(LL i=1;i<=n;i++){
        if(a[i]==i)
            ans++;
    }
    cout<<ans;
    return 0;
}
