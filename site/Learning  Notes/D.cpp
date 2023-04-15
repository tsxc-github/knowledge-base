#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL INF=1145141919;
double juli(LL x1,LL y1,LL x2,LL y2){
    return sqrt((double)pow(x1-x2,2)+pow(y1-y2,2));
}
struct edge{
    double v;
    LL to;
};
struct node{
    LL x,y;
    vector<edge>v;
};
int main(){
    // freopen("D.in","r",stdin);
    // freopen("D.out","w",stdout);
    LL n;
    cin>>n;
    node a[n+1];
    for(LL i=1;i<=n;i++){
        cin>>a[i].x>>a[i].y;
    }
    LL m;
    cin>>m;
    for(LL i=0;i<m;i++){
        LL x,y;
        cin>>x>>y;
        a[x].v.push_back({juli(a[x].x,a[x].y,a[y].x,a[y].y),y});
    }
    LL s,t;
    cin>>s>>t;
    priority_queue<pair<double,LL>,vector<pair<double,LL>>,greater<pair<double,LL>>>q;
    q.push({0,s});
    double dp[n+1];
    for(LL i=0;i<=n;i++){
        dp[i]=INF;
    }
    dp[s]=0;
    bool b[n+1]={};
    while(!q.empty()){
        LL p=q.top().second;
        q.pop();
        if(b[p]==true){
            continue;
        }
        b[p]=true;
        for(LL i=0;i<a[p].v.size();i++){
            dp[a[p].v[i].to]=min(dp[p]+a[p].v[i].v,dp[a[p].v[i].to]);
            q.push({dp[a[p].v[i].to],a[p].v[i].to});
        }
    }
    printf("%.2lf",dp[t]);
    return 0;
}