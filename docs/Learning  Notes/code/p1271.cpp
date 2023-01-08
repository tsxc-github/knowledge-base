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
int main(){
    ios::sync_with_stdio(false);
    LL n,m,temp;
    cin>>n>>m;
    LL *a=new LL[m+1];
    memset(a,0,sizeof(a));
    for(LL i=0;i<m;i++){
        cin>>a[i];}
    sort(a,a+m);
    for(LL i=0;i<m;i++){
        printf("%lld ",a[i]);}
    return 0;
}
