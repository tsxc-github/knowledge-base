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
    LL n,m;
    cin>>n>>m;
    LL v[n+1];
    LL a[n+1][n+1];
    for(LL i=1;i<=n;i++){
        cin>>v[i];
    }
    for(LL i=1;i<=n;i++){
        for(LL j=i+1;j<=n;j++){
            cin>>a[i][j];
            a[j][i]=a[i][j];
        }
    }
}
