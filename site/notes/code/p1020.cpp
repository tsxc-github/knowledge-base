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
#define MAX 1145140
#endif
LL a[MAX];
LL f[MAX];
int main(){
    #ifdef ONLINE_JUDGE
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #endif
    #ifndef ONLINE_JUDGE
    freopen("p1020_11.in","r",stdin);
    #endif
    LL n;
    for(n=0;cin>>a[n];n++);
    LL ans=-1;
    for(LL i=0;i<n;i++){
        #ifdef ONLINE_JUDGE
        if(clock()>CLOCKS_PER_SEC*0.95)
        break;
        #endif
        f[i]=1;
        for(LL j=0;j<i;j++){    
            if(a[j]>=a[i]){
                f[i]=max(f[i],f[j]+1);
                ans=max(ans,f[i]);
            }
        }
    }
    printf("%lld\n",ans);
    ans=0;
    memset(f,-1,sizeof(f));
    for(LL i=0;i<n;i++){
        bool flag=false;
        for(LL j=0;j<ans;j++){
            if(f[j]>=a[i]){
                f[j]=a[i];
                flag=true;
                break;
            }
        }
        if(!flag){
            f[ans]=a[i];
            ans++;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
