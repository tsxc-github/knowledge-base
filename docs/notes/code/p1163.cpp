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
#define eps 1e-10
LL n,p,m;
bool panduan(LD v){
    if(pow((LD)1/(1+v),m)>=(LD)1-(LD)n/p*v)
    return true;
    else
    return false;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>p>>m;
    LD left=0,right=1e10;
    while((right-left)>eps){
        LD mid=(left+right)/2;
        if(!panduan(mid))
            left=mid;
        else
            right=mid;}
    cout<<fixed<<setprecision(1)<<left*100;
    return 0;
}