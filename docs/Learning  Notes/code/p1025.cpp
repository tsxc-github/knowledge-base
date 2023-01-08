#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#include<queue>
#include<vector>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
LL n,m;
LL ans=0;
void dfs(LL now,LL step,LL father=1){
    if(now==0){
        if(step==0)ans++;
        return;}
    if(step==0)return;
    for(LL i=father;i<=now/step;i++){
        dfs(now-i,step-1,i);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    dfs(n,m);
    cout<<ans<<endl;
    return 0;
}
