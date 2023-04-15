#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
const LL INF=1145141919810;
int main(){
    LL n,m;
    cin>>n;
    vector<LL>v[n+1];
    LL x,y;
    do{
        cin>>x>>y;
        if(x==0&&y==0)
            break;
        v[x].push_back(y);
        v[y].push_back(x);
    }while(true);
    cin>>x>>y;
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
                if(p!=root&&lastTime[i]>=firstTime[p]&&firstTime[y]>=firstTime[i])
                    points[p]=true;
            }else{
                lastTime[p]=min(lastTime[p],firstTime[i]);
            }
        }
    };
    root=x;
    tarjan(x);
    LL ans=0;
    for(LL i=1;i<=n;i++){
        if(points[i]==true)
            ans++;
    }
    if(ans==0){
        printf("No solution");
        return 0;
    }
    for(LL i=1;i<=n;i++){
        if(points[i]==true){
            printf("%lld",i);
            return 0;
        }
    }
    return 0;
}
