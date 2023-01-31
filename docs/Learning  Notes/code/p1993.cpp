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
    // freopen("p1993.in","r",stdin);
    // freopen("p1993.ans","w",stdout);
    LL n,m;
    cin>>n>>m;
    node a[n+1];
    for(LL i=0;i<m;i++){
        LL t;
        cin>>t;
        LL x,y,z;
        switch (t){
            case 1:
                cin>>x>>y>>z;
                a[x].v.push_back({y,-z});
                break;
            case 2:
                cin>>x>>y>>z;
                a[y].v.push_back({x,z});
                break;
            case 3:
                cin>>x>>y;
                a[x].v.push_back({y,0});
                a[y].v.push_back({x,0});
                break;
            default:
                printf("ERROR");
                return 114514;
        }
    }
    for(LL i=1;i<=n;i++){
        a[0].v.push_back({i,0});//建立超只因源点
    }
    queue<LL>q;
    q.push(0);
    LL dp[n+1];
    for(LL i=1;i<=n;i++)
        dp[i]=INF;
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
        if(ans>114514){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}