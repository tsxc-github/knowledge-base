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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m,k;
    cin>>n>>m>>k;
    LL s,t;
    cin>>s>>t;
    node a[n];
    for(LL i=0;i<m;i++){
        LL x,y,z;
        cin>>x>>y>>z;
        a[x].v.push_back({z,y});
        a[y].v.push_back({z,x});
    }
    LL dp[n][k+2];
    for(LL i=0;i<n;i++)
        for(LL j=0;j<k+2;j++)
            dp[i][j]=INF;
    dp[s][k]=0;
    bool b[n][k+1]={};
    priority_queue<pair<LL,pair<LL,LL>>,vector<pair<LL,pair<LL,LL>>>,greater<pair<LL,pair<LL,LL>>>>q;
    for(LL i=0;i<=k;i++){
        q.push({0,{s,i}});
        dp[s][i]=0;
        while(!q.empty()){
            pair<LL,LL> p=q.top().second;
            q.pop();
            if(p.second<0||b[p.first][p.second]==true)
                continue;
            b[p.first][p.second]=true;
            for(LL i=0;i<a[p.first].v.size();i++){
                dp[a[p.first].v[i].to][p.second]=min(dp[a[p.first].v[i].to][p.second],dp[p.first][p.second]+a[p.first].v[i].v);
                q.push({dp[a[p.first].v[i].to][p.second],{a[p.first].v[i].to,p.second}});
                if(p.second!=0){
                    dp[a[p.first].v[i].to][p.second]=min(dp[a[p.first].v[i].to][p.second],dp[p.first][p.second-1]);
                    q.push({dp[a[p.first].v[i].to][p.second],{a[p.first].v[i].to,p.second}});}
            }
        }
    }
    LL ans=INF;
    for(LL i=0;i<=k;i++){
        ans=min(ans,dp[t][i]);
    }
    printf("%lld",ans);
    return 0;
}
