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
LL n,m;
bool panduan(LL h,LL a[]){
    LL temp[n],tot=0;
    for(LL i=0;i<n;i++){
        if(a[i]>=h)
        tot+=a[i]/h;
        if(tot>=m)
        return true;}
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    LL a[n];
    LL left=0,right=-1e10;
    for(LL i=0;i<n;i++){
        cin>>a[i];
        right=max(a[i],right);}
    while(right>left){
        LL middle=(left+right+1)/2;
        if(panduan(middle,a))
        left=middle;
        else
        right=middle-1;
    }
    printf("%lld",right);
    return 0;
}
