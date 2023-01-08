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
#define MAX 114514
LL n,m;
LL a[MAX];
bool panduan(LL h){
    LL tot=1;
    LL temp=0;
    for(LL i=0;i<n;i++){
        if(temp+a[i]>h){
            tot++;
            temp=0;}
        else
        temp+=a[i];}
    if(temp!=0)
    tot++;
    if(tot<m)
    return true;
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
freopen("p1182.in","r",stdin);
freopen("p1182.out","w",stdout);
#endif
    cin>>n>>m;
    for(LL i=0;i<n;i++)
    cin>>a[i];
    LL l=-1145141919810,r=0;
    for(LL i=0;i<n;i++){
        l=max(l,a[i]);
        r+=a[i];}
    while(l<r){
        LL mid=(l+r)/2;
        if(panduan(mid))
        r=mid;
        else
        l=mid+1;
    }
    cout<<r<<endl;
    return 0;
}
