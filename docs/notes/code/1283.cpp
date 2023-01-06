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
LL f2[MAX];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    LL n;
    cin>>n;
    for(LL i=0;i<n;i++){
        cin>>a[i];
        f1[i]=1;
        f2[i]=1;
    }
    LL ans=-1;
    for(LL i=0;i<n;i++){
        for(LL j=0;j<i;j++){
            if(a[j]<a[i]){
                f1[i]=max(f1[i],f1[j]+1);
            }
        }
    }
    for(LL i=0;i<n;i++){
        for(LL j=0;j<i;j++){
            if(a[j]>a[i]){
                f2[i]=max(f2[i],f2[j]+1);
            }
        }
    }
    for(LL i=0;i<n;i++){
        ans=max(f1[i]+f2[i],ans);
    }
    printf("%lld\n",ans-1);
    return 0;
}
