#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
const LL INF=1145141919810;
int main(){
    LL n,m;
    cin>>n>>m;
    vector<LL>v[n+1];
    vector<LL>z[n+1];
    vector<double>b[n+1];
    for(LL i=0;i<m;i++){
        LL x,y,c;
        double d;
        cin>>x>>y>>c>>d;
        v[x].push_back(y);
        z[x].push_back(c);
        b[x].push_back(d);
    }
    LL root;
    cin>>root;
    vector<LL>firstTime(n+1,0);
    vector<LL>lastTime(n+1,0);
    vector<LL>childTree(n+1,0);
    vector<LL>points(n+1,0);
    vector<LL>pointVal(n+1,0);
    vector<LL>pointTo[n+1];
    vector<LL>pointNum[n+1];
    vector<double>pointLess[n+1];
    stack<LL>s;
    vector<bool>inStack(n+1,false);
    LL now=1;
    LL tot=1;
    function<void(LL)>tarjan=[&](LL p){
        s.push(p);
        inStack[p]=true;
        firstTime[p]=now;
        lastTime[p]=now;
        now++;
        for(auto i:v[p]){
            if(firstTime[i]==0){
                childTree[p]++;
                tarjan(i);
                lastTime[p]=min(lastTime[p],lastTime[i]);
            }
            else if(inStack[i]==true){
                lastTime[p]=min(lastTime[p],firstTime[i]);
            }
        }
        if(firstTime[p]==lastTime[p]){
            while(s.top()!=p){
                    points[s.top()]=tot;
                    inStack[s.top()]=false;
                    s.pop();
                }
            s.pop();
            tot++;
        }
    };
    tarjan(root);
    for(LL i=1;i<=n;i++){
        for(LL j=0;j<v[i].size();j++){
            if(points[i]==points[v[i][j]]){
                pointVal[i]+=z[i][j];
                pointVal[i]+=z[i][j]*b[i][j];
                pointVal[i]+=z[i][j]*b[i][j]*b[i][j];
                pointVal[i]+=z[i][j]*b[i][j]*b[i][j]*b[i][j];
                pointTo[i].push_back(points[v[i][j]]);
                pointNum[i].push_back(pointVal[i]);
                pointLess[i].push_back(0);
            }else{
                pointTo[i].push_back(points[v[i][j]]);
                pointNum[i].push_back(z[i][j]);
                pointLess[i].push_back(b[i][j]);
            }
        }
    }
    priority_queue<pair<LL,LL>,vector<pair<LL,LL> >,greater<pair<LL,LL> > >q;
    q.push({0,root});
    vector<LL>dp(n+1,0);
    dp[root]=0;
    vector<bool>vis(n+1,false);
    while(!q.empty()){
        LL p=q.top().second;
        q.pop();
        if(vis[p]==true)
            continue;
        vis[p]=true;
        for(LL i=0;i<pointTo[p].size();i++){
            if(dp[i]<dp[p]+pointNum[p][i]){
                dp[i]=dp[p]+pointNum[p][i];
                q.push({dp[i],pointTo[p][i]});
            }
        }
    }
    LL ans=0;
    for(LL i=1;i<=n;i++){
        ans=max(ans,dp[i]);
    }
    printf("%lld",ans);
    return 0;
}
