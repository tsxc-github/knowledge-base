#include<bits/stdc++.h>
#define LL long long
using namespace std;
struct edge{
    LL v;
    LL to;
};
struct node{
    vector<edge>v;
};
node* z;
node* f;
void dij(node* z,LL* dp[]){
    priority_queue<pair<LL,LL>,vector<pair<LL,LL>>,greater<pair<LL,LL>>> q;
    q.push({0,1});
    
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
    LL* zdp[n+1];
    LL* fdp[n+1];
    for(LL i=0;i<=n;i++){
        zdp[i]=new LL [n+1];
        fdp[i]=new LL [n+1];
        memset(zdp[i],127,sizeof(LL)*(n+1));
        memset(fdp[i],127,sizeof(LL)*(n+1));
    }
    dij(z,zdp);
    dij(z,fdp);
}
