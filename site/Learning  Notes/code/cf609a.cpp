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
bool cmp(LL a,LL b){
    return a>b;}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    LL ans=0,a[2000];
    for(LL i=0;i<n;i++){
        cin>>a[i];}
    sort(a,a+n,cmp);
    LL i=0;
    for(;ans<m;i++){
        ans+=a[i];}
    cout<<i;
    return 0;
}
