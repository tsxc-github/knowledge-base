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
    freopen("T231656.in","r",stdin);
    freopen("T231656.out","w",stdout);
#endif
#ifdef ONLINE_JUDGE
    ios::sync_with_stdio(false);
    cin.tie(0);
#endif
    LL n,m;
    cin>>n;
    vector <LL>a;
    for(LL i=0;i<n;i++){
        LL temp;
        cin>>temp;
        a.push_back(temp);}
    sort(a.begin(),--a.end());
    cin>>m;
    vector <LL>::iterator now=lower_bound(a.begin(),--a.end(),m);
    if(now==a.end()){
        printf("0");
        return 0;}
    m=*now;
    a.erase(now);
    n--;
    LL ans=0;
    bool flag=false;
    for(LL i=0;i<n;i++){
        if(a[i]<=m){
            flag=true;
            ans++;
            m-=a[i];
        }
    }
    if(!flag)
        ans++;
    printf("%lld",ans);
    return 0;
}
