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
    for(LL i=0;i<m;i++){
        LL x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    LL root;
    vector<LL>firstTime(n+1,0);
    vector<LL>lastTime(n+1,0);
    vector<LL>childTree(n+1,0);
    vector<bool>points(n+1,false);
    LL now=1;
    function<void(LL)>tarjan=[&](LL p){
        firstTime[p]=now;
        lastTime[p]=now;
        now++;
        for(auto i:v[p]){
            if(firstTime[i]==0){
                childTree[p]++;
                tarjan(i);
                lastTime[p]=min(lastTime[p],lastTime[i]);
                if(p==root&&childTree[p]>=2)
                    points[p]=true;
                else if(p!=root&&lastTime[i]>=firstTime[p])
                    points[p]=true;
            }else{
                lastTime[p]=min(lastTime[p],firstTime[i]);
            }
        }
    };
    for(LL i=1;i<=n;i++)
        if(firstTime[i]==0){
            root=i;
            tarjan(i);
        }
    LL ans=0;
    for(LL i=1;i<=n;i++){
        if(points[i]==true)
            ans++;
    }
    printf("%lld\n",ans);
    for(LL i=1;i<=n;i++){
        if(points[i]==true)
            printf("%lld ",i);
    }
    return 0;
}
