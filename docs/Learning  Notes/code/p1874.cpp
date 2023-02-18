#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
const LL INF=1145141919810;
string s;
LL n;
LL to_num(LL start,LL end){
	LL num=0;
	for(LL i=start;i<=end;i++){
		num*=10;
		num+=s[i]-'0';
		if(num>n)
			return num;
	}
	return num;
}
LL ans=INF;
void dfs(LL tot,LL now,LL step){
	if(now>n)
		return;
	if(now==n&&tot==s.size())
		ans=min(step-1,ans);
	for(LL i=tot;i<s.size();i++){
		dfs(i+1,now+to_num(tot,i),step+1);
	}
}
int main(){
	// #ifndef DEBUGIN
	// freopen("fast.in","r",stdin);
	// #endif
	// #ifndef DEBUGOUT
	// freopen("fast.out","w",stdout);
	// #endif
	cin>>s>>n;
	dfs(0,0,0);
	if(ans==INF)
		printf("-1");
	else
		printf("%lld",ans);
}
