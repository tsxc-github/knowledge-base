#include<bits/stdc++.h>
using namespace std;
#define LL long long
const LL INF=1145141919810;
const LL MAX=500005;
LL n,m,s;
LL *fa;
vector<LL> *a;
struct Ask{
    LL x,y;
    LL ans;
};
Ask *ask;
bool *vis;
LL find(LL x){
    if(fa[x]==x)
        return x;
    return fa[x]=find(fa[x]);
}
void dfs(LL x){
    for(LL i=0;i<a[x].size();i++){
        dfs(a[x][i]);
        fa[find(x)]=find(a[x][i]);
        fa[find(x)]=x;
    }
    vis[x]=true;
    for(LL i=0;i<m;i++){
        if(x==ask[i].y&&vis[ask[i].x]==true){
            ask[i].ans=fa[find(x)];
        }
    }
}
int main(){
    cin>>n>>m>>s;
    fa=new LL [n+1];
    a=new vector<LL>[n+1];
    ask=new Ask [m];
    vis=new bool [n+1];
    memset(vis,0,sizeof(bool)*(n+1));
    for(LL i=0;i<=n;i++){
        fa[i]=i;
    }
    for(LL i=1;i<n;i++){
        LL x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(LL i=0;i<m;i++){
        cin>>ask[i].x>>ask[i].y;
    }
    dfs(s);
    for(LL i=0;i<m;i++){
        printf("%lld\n",ask[i].ans);
    }
    return 0;
}