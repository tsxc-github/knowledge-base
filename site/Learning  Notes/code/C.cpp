#include<bits/stdc++.h>
using namespace std;
#define LL long long
const LL INF=1145141919810;
struct edge {
	LL to;
	LL v;
};
struct node {
	vector<edge>v;
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	LL n,m;
	cin>>n>>m;
	LL vis[n+1]={};//依托答辩
	node a[n+1];
	for(LL i=0; i<m; i++) {
        LL t;
        cin>>t;
        LL x,y;
		cin>>x>>y;
        switch (t){
            case 1:
                a[x].v.push_back({y,0});
                a[y].v.push_back({x,0});
                break;
            case 2:
                a[x].v.push_back({y,1});
                break;
            case 3:
                a[y].v.push_back({x,0});
                break;
            case 4:
                a[y].v.push_back({x,1});
                break;
            case 5:
                a[x].v.push_back({y,0});
                break;
        }
	}
	for(LL i=1; i<=n; i++) a[0].v.push_back({i,0});
	LL dp[n+1];
	for(LL i=0; i<=n; i++) dp[i]=1;
	queue<LL>q;
	q.push(0);
	dp[0]=1;
	LL ans[10001]= {};
	while(!q.empty()) {//油饼食不食
		LL p=q.front();
		q.pop();
		vis[p]=false;
		for(LL i=0; i<a[p].v.size(); i++) {
			if(dp[a[p].v[i].to]<dp[p]+a[p].v[i].v) {
				dp[a[p].v[i].to]=dp[p]+a[p].v[i].v;
				if(!vis[a[p].v[i].to]) {
					q.push(a[p].v[i].to);
					vis[a[p].v[i].to]=true;
                    ++ans[a[p].v[i].to];
                    if(ans[a[p].v[i].to]>=n) {
                        printf("-1");
                        return 0;
                    }
                }
			}
		}
	}
    LL ans1=0;
	for(LL i=1; i<=n; i++) ans1+=dp[i];
    printf("%lld",ans1);//答辩输出
	return 0;
}