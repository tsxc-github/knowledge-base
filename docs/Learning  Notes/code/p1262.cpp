#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
const LL INF=1145141919810;
struct edge{
	LL to;
	LL v;
};
struct node{
	vector<edge>v;
};
LL *father;
node *a;
LL find(LL x){
	if(father[x]==x)
		return x;
	return father[x]=find(father[x]);
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("P1262.in","r",stdin);
	#endif
	// #ifndef DEBUGOUT
	// freopen("catch.out","w",stdout);
	// #endif
	LL n,p;
	cin>>n>>p;
	a=new node [n+1];
	LL v[n+1]={};
	for(LL i=0;i<p;i++){
		LL x,y;
		cin>>x>>y;
		a[0].v.push_back({x,y});
		v[x]=y;
	}
	LL r;
	cin>>r;
	for(LL i=0;i<r;i++){
		LL x,y;
		cin>>x>>y;
		a[x].v.push_back({y,0});
	}
	priority_queue<pair<LL,LL>,vector<pair<LL,LL>>,greater<pair<LL,LL>>>q;
	q.push({0,0});
	LL dp[n+1];
	memset(dp,0x3f,sizeof(LL)*(n+1));
	dp[0]=0;
	bool b[n+1]={};
	father=new LL [n+1];
	for(LL i=0;i<=n;i++){
		father[i]=i;
	}
	while(!q.empty()){
		LL p=q.top().second;
		q.pop();
		if(b[p]==true)
			continue;
		b[p]=true;
		for(LL i=0;i<a[p].v.size();i++){
			if(dp[a[p].v[i].to]>(min(dp[a[p].v[i].to],dp[p]+a[p].v[i].v))){
				dp[a[p].v[i].to]=min(dp[a[p].v[i].to],dp[p]+a[p].v[i].v);
				q.push({dp[a[p].v[i].to],a[p].v[i].to});
				if(p!=0)
					father[a[p].v[i].to]=find(p);
			}
			else
				if(dp[a[p].v[i].to]==(min(dp[a[p].v[i].to],dp[p]+a[p].v[i].v))){
					if(p!=0)
						father[a[p].v[i].to]=find(p);
				}
		}
	}
	LL t;
	memset(&t,0x3f,sizeof(LL));
	for(LL i=1;i<=n;i++){
		if(dp[i]==t){
			printf("NO\n%lld",i);
			return 0;
		}
	}
	LL ans=0;
	for(LL i=1;i<=n;i++){
		if(find(i)==i){
			ans+=v[i];
		}
	}
	printf("YES\n%lld",ans);
	return 0;
}
