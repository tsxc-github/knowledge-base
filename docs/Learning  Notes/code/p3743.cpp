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
#define eps 1e-6
struct shebei{
    LD a,b,time;
};
shebei a[MAX];
LL n;
LD p;
bool cmp(shebei a,shebei b){
    return a.time<b.time;}
bool panduan(LD time){
    LD temp=0;
    for(LL i=0;i<n;i++){
        if(a[i].time<=time)
            temp+=a[i].a*time-a[i].b;
        if(temp>p*time)
            return false;
            }
    return true;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>p;
    LD temp=0;
    for(LL i=0;i<n;i++){
        cin>>a[i].a>>a[i].b;
        a[i].time=a[i].b/a[i].a;
        temp+=a[i].a;}
    if(temp<=p){
        printf("-1");
        return 0;}
    LD left=0,right=1e10;
    while((right-left)>eps){
        LD mid=(left+right)/2;
        if(panduan(mid))
            left=mid;
        else
            right=mid;}
    printf("%.10Lf",left);
    return 0;
}
