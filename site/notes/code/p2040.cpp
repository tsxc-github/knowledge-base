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
LL ans=114514;
bool a[10][10];
bool v[10][10];
void dfs(LL now){
    if(now>ans)return;
    LL tot=0;
    for(LL i=1;i<=3;i++)
    for(LL j=1;j<=3;j++)
    if(a[i][j]==true)tot++;
    if(tot==9)
    ans=min(ans,now);
    for(LL i=1;i<=3;i++)
    for(LL j=1;j<=3;j++){
        if(v[i][j]!=true){
            v[i][j]=true;
            a[i][j]=!a[i][j];
            a[i+1][j]=!a[i+1][j];
            a[i-1][j]=!a[i-1][j];
            a[i][j+1]=!a[i][j+1];
            a[i][j-1]=!a[i][j-1];
            dfs(now+1);
            a[i][j]=!a[i][j];
            a[i+1][j]=!a[i+1][j];
            a[i-1][j]=!a[i-1][j];
            a[i][j+1]=!a[i][j+1];
            a[i][j-1]=!a[i][j-1];
            v[i][j]=false;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(LL i=1;i<=3;i++){
        for(LL j=1;j<=3;j++){
            cin>>a[i][j];
        }
    }
    dfs(0);
    cout<<ans<<endl;
    return 0;
}
