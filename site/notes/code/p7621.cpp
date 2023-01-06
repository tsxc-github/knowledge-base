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
    LL n;
    cin>>n;
    LD ans=0;
    for(LL i=0;i<n;i++){
        LD x;
        LL y;
        cin>>x>>y;
        ans+=x*y;}
    printf("%.1Lf",floor(ans*0.85*10)/10.0);
    return 0;
}
