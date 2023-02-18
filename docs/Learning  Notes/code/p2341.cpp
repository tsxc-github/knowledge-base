#include<bits/stdc++.h>
using namespace std;
#define LL long long
const LL INF=1145141919810;
LL n,m;
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
    cin>>n>>m;
    z=new vector<LL> [n+1];
    f=new vector<LL> [n+1];
    vis=new bool [n+1];
    memset(vis,0,sizeof(bool)*(n+1));
    d=new LL [n+1];
    memset(d,0,sizeof(LL)*(n+1));
    for(LL i=0;i<m;i++){
        LL a,b;
        cin>>a>>b;
        z[a].push_back(b);
        f[b].push_back(a);
    }
    for(LL i=1;i<=n;i++){
        dfs1(i);
    }
    LL p=1;
    while(!s.empty()){
        LL t=s.top();
        s.pop();
        if(vis[t]==true)
            dfs2(t,t);
    }
    LL ans=0;
    for(LL i=1;i<=n;i++){
        if(d[i]==n-1)
            ans++;
    }
    printf("%lld",ans);
    return 0;
}