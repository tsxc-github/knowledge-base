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
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 2000
#endif
struct dian{
    bool west,north,east,south;
    dian(){
        west=false,north=false,east=false,south=false;
    }};
dian* d[MAX][MAX];
bool v[MAX][MAX];
LL n,m,ans,maxx=0;
void dfs(LL x,LL y,LL &a){
    if(x<0||y<0||x>=n||y>=m)return;
    if(v[x][y])return;
    v[x][y]=true;
    a++;
    if(!d[x][y]->west)dfs(x,y-1,a);
    if(!d[x][y]->east)dfs(x,y+1,a);
    if(!d[x][y]->north)dfs(x-1,y,a);
    if(!d[x][y]->south)dfs(x+1,y,a);
    maxx=max(maxx,a);}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(LL i=0;i<n;i++)
    for(LL j=0;j<m;j++){
        LL temp;
        struct dian* a=new dian();
        cin>>temp;
        if(temp&1)
		a->west=true;
		if(temp&2)
		a->north=true;
		if(temp&4)
		a->east=true;
		if(temp&8)
		a->south=true;
		d[i][j]=a;}
	for(LL i=0;i<n;i++)
    for(LL j=0;j<m;j++)
    if(!v[i][j]){
    LL a=0;
    ans++;
    dfs(i,j,a);}
    cout<<ans<<"\n"<<maxx;
    return 0;
}

