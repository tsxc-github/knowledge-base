#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
const LL INF=1145141919810;
struct Node{
    LL money;
    LL number;
};
struct Edge{
    LL v;
    LL to;
};
int main(){
	#ifndef ONLINE_JUDGE
	freopen("P1262.in","r",stdin);
	#endif
	// #ifndef DEBUGOUT
	// freopen("catch.out","w",stdout);
	// #endif
	LL n,p;
	cin>>n>>p;
    vector<Node>canBuy(p); 
    for(LL i=0;i<p;i++){
        LL a,b;
        cin>>a>>b;
        canBuy[i].number=a;
        canBuy[i].money=b;
    }
    sort(canBuy.begin(),canBuy.end(),[](Node a,Node b){
        return a.money<b.money;
    });
    vector<Edge>nodes[n+1];
    for(LL i=0;i<canBuy.size();i++){
        nodes[0].push_back({i,canBuy[i].number});
    }
    LL r;
    cin>>r;
    for(LL i=0;i<r;i++){
        LL a,b;
        cin>>a>>b;
        nodes[a].push_back({0,b});
    }
    priority_queue<pair<LL,LL>,vector<pair<LL,LL> >,greater<pair<LL,LL> > >q;
    q.push({0,0});
    vector<LL>dp(n+1,INF);
    dp[0]=0;
    bool vis[n+1]={};
    while(!q.empty()){
        LL p=q.top().second;
        q.pop();
        if(vis[p]==true)
            continue;
        vis[p]=true;
        for(auto edge:nodes[p]){
            if(dp[edge.to]>dp[p]+edge.v){
                dp[edge.to]=dp[p]+edge.v;
                q.push({dp[edge.to],edge.to});
            }
        }
    }
    LL ans=0;
    for(LL i=1;i<=n;i++){
        if(dp[i]==INF){
            printf("NO\n%lld",i);
            return 0;
        }
        ans+=canBuy[dp[i]].money;
        canBuy[dp[i]].money=0;
    }
    printf("YES\n%lld",ans);
    return 0;
}
