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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,c;
    cin>>n>>c;
    map<LL,LL>m;
    LL a[n];
    for(LL i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
        a[i]-=c;}
    LL ans=0;
    for(LL i=0;i<n;i++){
        ans+=m[a[i]];
    }
    cout<<ans;
    return 0;
}
