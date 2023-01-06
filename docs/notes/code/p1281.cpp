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
LL n,m,ans=-1;
LL a[MAX];
bool dfs(LL now,LL cishu){
    if(now>=n)
    if(cishu==m)
    return true;
    else
    return false;
    if(cishu>=m){
    return false;}
    bool flag=false;
    for(LL i=now;i<n;i++){
        LL temp=0;
        for(LL j=now;j<=i;j++)
        temp+=a[j];
        if(dfs(now+i+1,cishu+1)){
            flag=true;
            ans=max(ans,temp);}
        else break;}
    return flag;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(LL i=0;i<n;i++)
    cin>>a[i];
    dfs(0,0);
    cout<<ans;
    return 0;
}
