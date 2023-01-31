#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL INF=1145141919810;
struct edge{
    LL v;
    LL to;
};
struct node{
    vector<edge>v;
};
node* z;
node* f;
bool* b;
void dij(node* z,LL dp[]){
    priority_queue<pair<LL,LL>,vector<pair<LL,LL>>,greater<pair<LL,LL>>> q;
    q.push({0,1});
    dp[1]=0;
    while(!q.empty()){
        LL p=q.top().second;
        q.pop();
        if(b[p]==true)
            continue;
        b[p]=true;
        for(LL i=0;i<z[p].v.size();i++){
            dp[z[p].v[i].to]=min(dp[z[p].v[i].to],dp[p]+z[p].v[i].v);
            q.push({dp[z[p].v[i].to],z[p].v[i].to});
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    z=new node[n+1];
    f=new node[n+1];
    for(LL i=1;i<=m;i++){
        LL u,v,w;
        cin>>u>>v>>w;
        z[u].v.push_back({w,v});
        f[v].v.push_back({w,u});
    }
    LL zdp[n+1];
    LL fdp[n+1];
    for(LL i=1;i<=n;i++){
        zdp[i]=INF;
        fdp[i]=INF;
    }
    b=new bool[n+1];
    memset(b,0,sizeof(bool)*(n+1));
    dij(z,zdp);
    memset(b,0,sizeof(bool)*(n+1));
    dij(f,fdp);
    LL ans=0;
    for(LL i=1;i<=n;i++){
        ans+=zdp[i]+fdp[i];
    }
    printf("%lld",ans);
    return 0;
}
