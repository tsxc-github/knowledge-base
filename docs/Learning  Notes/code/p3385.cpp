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
    LL T;
    cin>>T;
    while(T--){
        LL n,m;
        cin>>n>>m;
        node a[n+1];
        LL b=0;
        for(LL i=0;i<m;i++){
            LL u,v,w;
            cin>>u>>v>>w;
            if(w>=0){
                a[u].v.push_back({w,v});
                a[v].v.push_back({w,u});
                b+=2;
            }
            if(w<0){
                a[u].v.push_back({w,v});
                b+=1;
            }
        }
        LL dp[n+1];
        for(LL i=1;i<=n;i++)
            dp[i]=INF;
        queue<LL>q;
        q.push(1);
        dp[1]=0;
        LL cnt=0;
        bool error=false;
        while(!q.empty()){
            LL p=q.front();
            q.pop();
            for(LL i=0;i<a[p].v.size();i++){
                if(dp[a[p].v[i].to]>dp[p]+a[p].v[i].v){
                    cnt++;
                    dp[a[p].v[i].to]=dp[p]+a[p].v[i].v;
                    q.push(a[p].v[i].to);
                }
            }
            if(cnt>114514){
                printf("YES\n");
                error=true;
                break;
            }
        }
        if(error==false){
            printf("NO\n");
        }
    }
    return 0;
}
