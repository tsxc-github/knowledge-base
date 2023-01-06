#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
LL a[10001][10001];
LL maxx[10001][10001];
LL ans;
LL r,c;
LL dfs(LL i,LL j,LL before){
    if(i<=0||j<=0||i>r||j>c||before<=a[i][j])
        return 0;
    if(maxx[i][j]!=0)
        return maxx[i][j];
    maxx[i][j]=max(max(dfs(i+1,j,a[i][j]),dfs(i,j+1,a[i][j])),max(dfs(i-1,j,a[i][j]),dfs(i,j-1,a[i][j])))+1;
    if(maxx[i][j]>ans)
        ans=maxx[i][j];
    return maxx[i][j];}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>r>>c;
    for(int i=1;i<=r;i++)
    for(int j=1;j<=c;j++)
    cin>>a[i][j];
    for(int i=1;i<=r;i++)
    for(int j=1;j<=c;j++)
    dfs(i,j,9223372036854775807);
    cout<<ans<<endl;
    return 0;
}
