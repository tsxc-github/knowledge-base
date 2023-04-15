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
    vector<LL>b[n+1];
    for(LL i=0;i<m;i++){
        LL x,y,c;
        double d;
        cin>>x>>y>>c>>d;
        v[x].push_back(y);
        z[x].push_back(c);
        b[x].push_back((d+0.000000001)*10);
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
            points[s.top()]=tot;
            inStack[s.top()]=false;
            s.pop();
            tot++;
        }
    };
    tarjan(root);
    for(LL i=1;i<=n;i++){
        for(LL j=0;j<v[i].size();j++){
            if(points[i]==points[v[i][j]]){
                LL tmp=z[i][j];
                while(tmp!=0){
                    pointVal[points[i]]+=tmp;
                    tmp*=b[i][j];
                    tmp/=10;
                }
            }else{
                pointTo[points[i]].push_back(points[v[i][j]]);
                pointNum[points[i]].push_back(z[i][j]);
                pointLess[points[i]].push_back(b[i][j]);
            }
        }
    }
    root=points[root];
    queue<LL>q;
    q.push(root);
    vector<LL>dp(tot+1,0);
    dp[root]=pointVal[root];
    vector<bool>inQueue(tot+1,false);
    inQueue[root]=true;
    while(!q.empty()){
        LL p=q.front();
        q.pop();
        for(LL i=0;i<pointTo[p].size();i++){
            if(dp[pointTo[p][i]]<dp[p]+pointNum[p][i]+pointVal[pointTo[p][i]]){
                dp[pointTo[p][i]]=dp[p]+pointNum[p][i]+pointVal[pointTo[p][i]];
                if(inQueue[pointTo[p][i]]==false)
                    q.push(pointTo[p][i]);
            }
        }
    }
    LL ans=0;
    for(LL i=1;i<=tot;i++){
        ans=max(ans,dp[i]);
    }
    printf("%lld",ans);
    return 0;
}
