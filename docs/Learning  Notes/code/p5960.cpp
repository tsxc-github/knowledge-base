#include<bits/stdc++.h>
using namespace std;
#define LL long long
const LL INF=1145141919810;
struct edge{
    LL to;
    LL v;
};
struct node{
    vector<edge>v;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    node a[n+1];
    for(LL i=0;i<m;i++){
        LL x,y,z;
        cin>>x>>y>>z;
        a[x].v.push_back({y,-z});
        if(z==0){
            a[y].v.push_back({x,-z});
        }
    }
    for(LL i=1;i<=n;i++){
        a[0].v.push_back({i,0});
    }
    LL dp[n+1];
    for(LL i=0;i<=n;i++){
        dp[i]=INF;
    }
    queue<LL>q;
    q.push(0);
    dp[0]=0;
    LL ans=0;
    while(!q.empty()){
        LL p=q.front();
        q.pop();
        for(LL i=0;i<a[p].v.size();i++){
            if(dp[a[p].v[i].to]>dp[p]+a[p].v[i].v){
                dp[a[p].v[i].to]=dp[p]+a[p].v[i].v;
                q.push(a[p].v[i].to);
                ans++;
            }
        }
        if(clock()>0.97*CLOCKS_PER_SEC){
            printf("NO");
            return 0;
        }
    }
    for(LL i=1;i<=n;i++){
        printf("%lld ",dp[i]);
    }
    return 0;
}