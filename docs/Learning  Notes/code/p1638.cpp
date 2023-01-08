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
int main(){
    #ifndef ONLINE_JUDGE
    freopen("P1638_9.in","r",stdin);
    freopen("P1638_9.out","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    LL *a=new LL[n+1];
    LL *v=new LL[m+1];
    memset(v,0,sizeof(v)*(m+1));
    for(LL i=1;i<=n;i++){
        cin>>a[i];}
    LL left=1,right=1;
    LL huashi=1;
    v[a[1]]=1;
    LL ansa=1,ansb=n;
    while(right<=n){
        while(huashi<m){
            right++;
            if(right>n)break;
            if(!(v[a[right]]))
                huashi++;
            v[a[right]]++;}
        if(ansb-ansa>right-left){
        ansa=left;
        ansb=right;}
        v[a[left]]--;
        if(!v[a[left]])
            huashi--;
        left++;}
    cout<<ansa<<" "<<ansb;}
