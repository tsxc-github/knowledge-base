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
#define MAX 114514
LL a[MAX];
LL f1[MAX];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    LL n;
    cin>>n;
    for(LL i=0;i<n;i++){
        cin>>a[i];
    }
    LL ans=-1;
    for(LL i=0;i<n;i++){
        #ifdef ONLINE_JUDGE
        if(clock()>CLOCKS_PER_SEC*0.95)
        break;
        #endif
        f1[i]=1;
        for(LL j=0;j<i;j++){    
            if(a[j]<a[i]){
                f1[i]=max(f1[i],f1[j]+1);
                ans=max(ans,f1[i]);
            }
        }
    }
    printf("%lld\n",ans);
    return 0;
}
