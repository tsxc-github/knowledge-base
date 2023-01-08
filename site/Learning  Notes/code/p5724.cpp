#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#include<climits>
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
    LL n,x;
    cin>>n;
    LL maxx=LLONG_MIN,minn=LLONG_MAX;
    for(LL i=1;i<=n;i++){
        cin>>x;
        maxx=max(maxx,x);
        minn=min(minn,x);}
    cout<<maxx-minn;
}
