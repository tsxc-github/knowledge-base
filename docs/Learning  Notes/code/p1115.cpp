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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,x,max;
    cin>>n;
    cin>>x;
    LL ans=0;
    ans=max=x;
    for(LL i=1;i<n;i++){
        cin>>x;
        if(ans<0)ans=0;
        ans+=x;
        if(max<ans)max=ans;}
    printf("%lld",max);
    return 0;
}
