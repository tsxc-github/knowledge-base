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
LL ans=1;
void dfs(LL n){
    for(LL i=1;i<=n/2;i++){
        ans++;
        dfs(i);}
}
int main(){
    ios::sync_with_stdio(false);
    LL n,x;
    cin>>n;
    dfs(n);
    cout<<ans<<endl;
    return 0;
}
