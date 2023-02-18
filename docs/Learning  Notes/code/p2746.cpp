#include<bits/stdc++.h>
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
vector<LL>*z;
vector<LL>*f;
LL *d;
bool *vis;
stack<LL>s;
void dfs1(LL now){
    if(vis[now]==true)
        return;
    vis[now]=true;
    for(LL i=0;i<z[now].size();i++){
        dfs1(z[now][i]);
    }
    s.push(now);
}
void dfs2(LL p,LL now){
    if(vis[now]!=true)
        return;
    vis[now]=false;
    d[p]++;
    for(LL i=0;i<f[now].size();i++){
        dfs2(p,f[now][i]);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    LL rd[n+1]={};
    LL cd[n+1]={};
    for(LL i=1;i<=n;i++)a[i]=i;
    z=new vector<LL> [n+1];
    f=new vector<LL> [n+1];
    vis=new bool [n+1];
    memset(vis,0,sizeof(bool)*(n+1));
    d=new LL [n+1];
    memset(d,0,sizeof(LL)*(n+1));
    bool dp[n+1][n+1];
    memset(dp,0,sizeof(dp));
    for(LL i=1;i<=n;i++){
        LL t;
        cin>>t;
        while(t!=0){
            dp[i][t]=true;
            rd[t]++;
            cd[i]++;
            z[i].push_back(t);
            f[t].push_back(i);
            cin>>t;
        }
    }
    for(LL i=1;i<=n;i++){
        dfs1(i);
    }
    LL p=1;
    // printf("DEBUG:%lld\n",s.size());
    while(!s.empty()){
        LL t=s.top();
        s.pop();
        
        if(vis[t]==true)
            dfs2(t,t);
    }
    for(LL i=1;i<=n;i++)
        dp[i][i]=true;
    for(LL k=1;k<=n;k++)
        for(LL i=1;i<=n;i++)
            for(LL j=1;j<=n;j++)
                dp[i][j]=dp[i][k]&&dp[k][j]||dp[i][j];
    for(LL i=1;i<=n;i++)
        for(LL j=1;j<=n;j++)
            if(dp[i][j]==true)
                a[j]=a[i];
    LL ans1=0;
    for(LL i=1;i<=n;i++){
        if(d[i]>=1)
            ans1++;
    }
    LL ans=0;
    for(LL i=1;i<=n;i++){
        if(a[i]==i)
            ans++;
    }
    LL rdans=0,cdans=0;
    for(LL i=1;i<=n;i++){
        if(rd[i]==0)
            rdans++;
        if(cd[i]==0)
            cdans++;
    }
    if(rdans==cdans&&ans1>1){
        printf("%lld\n%lld",ans,ans1);
        return 0;
    }
    if(ans1==1)
        rdans=cdans=0;
    printf("%lld\n%lld",ans,max(rdans,cdans));
    return 0;
}