#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
LL n,m;
stack <LL>s;
LL iiiiiiindex=1;
LL *firsttime;
LL *lasttime;
LL *v;
LL *bing;
LL *lastv;
bool *instack;
vector<LL> *edge;
vector<LL> *lastedge;
LL tot=0;
void tarjan(LL now){
    firsttime[now]=lasttime[now]=iiiiiiindex++;
    s.push(now);
    instack[now]=true;
    for(LL i=0;i<edge[now].size();i++){
        if(firsttime[edge[now][i]]==0){
            tarjan(edge[now][i]); 
            if(lasttime[now]>lasttime[edge[now][i]])
                lasttime[now]=lasttime[edge[now][i]];
        }else if(instack[edge[now][i]]==true&&lasttime[now]>firsttime[edge[now][i]])
            lasttime[now]=firsttime[edge[now][i]];
        
    }
    if(firsttime[now]==lasttime[now]){
        tot++;
        LL top;
        do{
            top=s.top();
            s.pop();
            instack[top]=false;
            bing[top]=tot;
            lastv[tot]+=v[top];
        }while(now!=top);
    }
}
LL lastans=0;
bool *vis;
void dfs(LL ans,LL now){
    if(vis[now]==true)
        return;
    ans+=lastv[now];
    lastans=max(lastans,ans);
    for(LL i=0;i<lastedge[now].size();i++){
        vis[now]=true;
        dfs(ans,lastedge[now][i]); 
        vis[now]=false;
    }
}
int main(){
    cin>>n>>m;
    firsttime=new LL [n+1];
    lasttime=new LL [n+1];
    v=new LL [n+1];
    bing=new LL [n+1];
    lastv=new LL [n+1];
    instack=new bool[n+1];
    vis=new bool[n+1];
    edge=new vector<LL>[n+1];
    lastedge=new vector<LL>[n+1];
    memset(firsttime,0,sizeof(LL)*(n+1));
    memset(lasttime,0,sizeof(LL)*(n+1));
    memset(v,0,sizeof(LL)*(n+1));
    memset(lastv,0,sizeof(LL)*(n+1));
    memset(bing,0,sizeof(LL)*(n+1));
    memset(instack,0,sizeof(bool)*(n+1));
    memset(vis,0,sizeof(bool)*(n+1));
    for(LL i=1;i<=n;i++){
        cin>>v[i];
    }
    for(LL i=1;i<=m;i++){
        LL a,b;
        cin>>a>>b;
        edge[a].push_back(b);
    }
    for(LL i=1;i<=n;i++)
        if(firsttime[i]==0)
            tarjan(i);
    for(LL i=1;i<=n;i++){
        for(LL j=0;j<edge[i].size();j++){
            if(bing[i]!=bing[edge[i][j]]){
                lastedge[bing[i]].push_back(bing[edge[i][j]]);
            }
        }
    }
    for(LL i=1;i<=tot;i++){
        dfs(0,i);
    }
    cout<<lastans;
    return 0;
}