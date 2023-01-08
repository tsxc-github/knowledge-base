#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	LL n,k;
	cin>>n>>k;
	LL a[n+1][n+1];
    LL vis[n+1][n+1];
	for(LL i=1;i<=n;i++){
		for(LL j=1;j<=n;j++)
			cin>>a[i][j];
	}
	k-=1;
	LL u=1,v=2;
    for(LL i=1;i<=k;i++){
        swap(u,v);
		v=a[u][v];
        if(vis[u][v]!=0){
            LL huan=i-vis[u][v];
            i=(k-(k-i)%huan);
        }
        vis[u][v]=i;
    }
	printf("%lld",u);
	return 0;
}