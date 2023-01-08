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
#define MAX 1100
#endif
LL a[MAX];
LL n,ans;
void dfs(LL now){
    for(LL i=0;i<n-now;i++){
        for(LL j=now;j<i+now;j++)
        ans+=a[j];
        dfs(now+i);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(LL i=0;i<n;i++){
        cin>>a[i];}
    dfs(0);
    printf("%lld\n",ans);
    return 0;
    

}
