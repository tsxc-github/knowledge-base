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
struct xuanshou{
    LL num,fenshu;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    xuanshou xuan[n];
    for(LL i=0;i<n;i++){
        cin>>xuan[i].num;
        cin>>xuan[i].fenshu;
    }
    m*=1.5;
    sort(xuan,xuan+n,[](xuanshou a,xuanshou b){
        if(a.fenshu!=b.fenshu)
        return a.fenshu>b.fenshu;
        return a.num<b.num;
    });
    LL ans=xuan[m-1].fenshu;
    while(m<n&&xuan[m].fenshu==ans)m++;
    printf("%lld %lld\n",ans,m); 
    for(LL i=0;i<m;i++){    
        printf("%lld %lld\n",xuan[i].num,xuan[i].fenshu);
    }
    return 0;
}
