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
    LL n;
    cin>>n;
    bool light[MAX]={};
    for(LL i=0;i<n;i++){
        double a;
        LL t;
        cin>>a>>t;
        for(LL i=1;i<=t;i++){
            light[(LL)(i*a)]=!light[(LL)(i*a)];
        }
    }
    for(LL i=1;i<MAX;i++){
        if(light[i]==true){
                printf("%lld",i);
                break;
        }
    }
    return 0;
}
