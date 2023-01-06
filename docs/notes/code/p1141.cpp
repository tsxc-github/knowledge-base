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
#define MAX 1145
#endif
bool a[MAX][MAX];
LL f[MAX][MAX];
bool v[MAX][MAX];
LL n,m;
LL dfs(LL x,LL y){
    if(x>n||y>n)return 0;
    if(x<=0||y<=0)return 0;
    if(f[x][y]!=-1)return f[x][y];
    f[x][y]=1;
    if(a[x][y]!=a[x][y+1]&&v[x][y+1]!=true){
        v[x][y+1]=true;
        f[x][y]+=dfs(x,y+1);
        v[x][y+1]=false;}
    if(a[x][y]!=a[x+1][y]&&v[x+1][y]!=true){
        v[x+1][y]=true;
        f[x][y]+=dfs(x+1,y);
        v[x+1][y]=false;}
    if(a[x][y]!=a[x-1][y]&&v[x-1][y]!=true){
        v[x-1][y]=true;
        f[x][y]+=dfs(x-1,y);
        v[x-1][y]=false;}
    if(a[x][y]!=a[x][y-1]&&v[x][y-1]!=true){
        v[x][y-1]=true;
        f[x][y]+=dfs(x,y-1);
        v[x][y-1]=false;}
    
    return f[x][y];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    memset(f,-1,sizeof(f));
    for(LL i=1;i<=n;i++){
        getchar();
    for(LL j=1;j<=n;j++){
        a[i][j]=getchar()-'0';
    }}
    for(LL i=0;i<m;i++){
        LL x,y;
        cin>>x>>y;
        printf("%lld\n",dfs(x,y));
    }
    return 0;
}
