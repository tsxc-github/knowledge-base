#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL INF=1145141919810;
struct edge{
    LL to;
    double v;
};
struct node{
    vector<edge>v;
};
inline double v(LL x1,LL y1,LL x2,LL y2){
    return sqrt((double)pow(x1-x2,2)+pow(y1-y2,2));
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n;
    LL zbx[n+1];
    LL zby[n+1];
    for(LL i=1;i<=n;i++){
        cin>>zbx[i]>>zby[i];
    }
    node a[n+1];
    cin>>m;
    for(LL i=1;i<=m;i++){
        LL x,y;
        cin>>x>>y;
        a[x].v.push_back({y,v(zbx[x],zby[x],zbx[y],zby[y])});
        a[y].v.push_back({x,v(zbx[x],zby[x],zbx[y],zby[y])});
    }
    double dp[n+1];
    for(LL i=1;i<=n;i++)
        dp[i]=INF;
    LL s,t;
    cin>>s>>t;
    priority_queue<pair<double,LL>,vector<pair<double,LL>>,greater<pair<double,LL>>>q;
    q.push({0,s});
    dp[s]=0;
    bool b[n+1]={};
    while(!q.empty()){
        LL p=q.top().second;
        q.pop();
        if(b[p]==true)
            continue;
        b[p]=true;
        for(LL i=0;i<a[p].v.size();i++){
            dp[a[p].v[i].to]=min(dp[a[p].v[i].to],dp[p]+a[p].v[i].v);
            q.push({dp[a[p].v[i].to],a[p].v[i].to});
        }
    }
    printf("%.2lf",dp[t]);
    return 0;
}
