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
#ifndef ONLINE_JUDGE
    freopen("T231920.in","r",stdin);
#endif
#ifdef ONLINE_JUDGE
    ios::sync_with_stdio(false);
    cin.tie(0);
#endif
    LL n;
    cin>>n;
    LL a[n];
    for(LL i=0;i<n;i++){
        cin>>a[i];
    }
    LL l=0,r=0;
    LL ans=-1145141414810;
    while(l<n){
        r=l;
        LL nowmax=a[l];
        LL nowmin=a[l];
        ans=max(ans,nowmax-nowmin-r+l-1);
        while(r<n){
            nowmax=max(nowmax,a[r]);
            nowmin=min(nowmin,a[r]);
            ans=max(ans,nowmax-nowmin-r+l-1);
            r++;
    }l++;}
    cout<<ans<<endl;
    return 0;
}
