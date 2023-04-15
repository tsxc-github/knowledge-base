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
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("P1262.in","r",stdin);
	// #endif
	// #ifndef DEBUGOUT
	// freopen("catch.out","w",stdout);
	// #endif
	LL n,p;
	cin>>n>>p;
	vector<node>a(n+1);
	vector<LL>father(n+1);
	function<LL(LL)> find=[&](LL x){
		if(father[x]==x)
			return x;
		return father[x]=find(father[x]);
	};
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
	
	vector<LL>points(n+1,0);
	vector<LL>pointTo[n+1];
	vector<LL>pointNum[n+1];
	LL tot=1;
	[&](){
		vector<LL>firstTime(n+1,0);
		vector<LL>lastTime(n+1,0);
		vector<LL>childTree(n+1,0);
		vector<LL>pointVal(n+1,0);
		vector<double>pointLess[n+1];
		stack<LL>s;
		vector<bool>inStack(n+1,false);
		LL now=1;
		function<void(LL)>tarjan=[&](LL p){
			s.push(p);
			inStack[p]=true;
			firstTime[p]=now;
			lastTime[p]=now;
			now++;
			for(auto i:a[p].v){
				if(firstTime[i.to]==0){
					childTree[p]++;
					tarjan(i.to);
					lastTime[p]=min(lastTime[p],lastTime[i.to]);
				}
				else if(inStack[i.to]==true){
					lastTime[p]=min(lastTime[p],firstTime[i.to]);
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
		};tarjan(0);
	}();
	for(LL i=1;i<=n;i++){
        for(LL j=0;j<a[i].v.size();j++){
            if(points[i]==points[a[i].v[j].to]){
				;
            }else{
                pointTo[points[i]].push_back(points[a[i].v[j].to]);
                pointNum[points[i]].push_back(a[i].v[j].v);
            }
        }
    }
	LL root=points[0];
	vector<LL>dp(n+1,INF);
	dp[root]=0;
	vector<LL>tmp(tot+1);
	function<LL(LL)>dfs=[&](LL p){
		for(LL i=0;i<pointTo[p].size();i++){
			
		}
	};
	LL ans=dfs(root);

	for(LL i=1;i<=n;i++){
		if(dp[points[i]]==INF){
			printf("NO\n%lld",i);
			return 0;
		}
	}
	printf("YES\n%lld",ans);
	return 0;
}
