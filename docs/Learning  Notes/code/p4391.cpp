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
#ifdef ONLINE_JUDGE
    ios::sync_with_stdio(false);
    cin.tie(0);
#endif
    LL n;
    string b;
    cin>>n>>b;
    LL ans;
    for(LL j=n-1;j>=0;j--){
        if(b.substr(0,j)==b.substr(n-j,j)){
        ans=j;break;}
    }
    printf("%lld",n-ans);
    return 0;

}