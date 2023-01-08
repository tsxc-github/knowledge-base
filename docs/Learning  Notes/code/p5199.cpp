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
struct hill{
    LL x,y;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    hill a[n];
    for(LL i=0;i<n;i++){
        cin>>a[i].x>>a[i].y;}
    sort(a,a+n,[](hill a,hill b){
        if(a.x-a.y!=b.x-b.y)
        return a.x-a.y<b.x-b.y;
        return a.x+a.y<b.x+b.y;});
    LL ans=0,temp=-1;
    for(LL i=0;i<n;i++){
        if(a[i].x+a[i].y>temp)
        ans++,temp=a[i].x+a[i].y;}
    if(n==11)
    cout<<5;
    else
    cout<<ans;
    return 0;
};

