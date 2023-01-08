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
struct num{
    LL num,i;
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("C:\\code\\c++\\shua ti\\p4305hack\\test1.in","r",stdin);
    freopen("p4305.out","w",stdout);
    #endif
    LL k;
    cin>>k;
    while(k--){
        LL n;
        cin>>n;
        num a[n];
        for(LL i=0;i<n;i++)cin>>a[i].num,a[i].i=i;
        stable_sort(a,a+n,[](num a,num b){return a.num>b.num;});
        LL last=unique(a,a+n,[](num a,num b){return a.num==b.num;})-a;
        stable_sort(a,a+last,[](num a,num b){return a.i<b.i;});
        for(LL i=0;i<last;i++)printf("%lld ",a[i].num);
        printf("\n");
    }
    return 0;
}
