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
LL n,m;
struct king
{
    LL k;
    LL c;
    LL z;
};
king a[1000010];
bool cmp(king a,king b){
    return a.c>b.c;}
bool exit(){
    LL temp=1;
    for(LL j=0;j<n;j++){
        if(a[j].z==0)continue;
        if(a[j].z==1)temp*=2;
        temp*=a[j].z;}
    if(temp>=m)
        return true;
    else
        return false;
}
int main(){
    ios::sync_with_stdio(false);
    LL ans=0;
    cin>>n>>m;
    for(LL i=0;i<n;i++){
        LL k;
        cin>>k;
        a[i].k=k;}
    for(LL i=0;i<n;i++){
        LL c;
        cin>>c;
        a[i].c=c;}
    sort(a,a+n,cmp);
    for(LL i=0;i<n;i++){
        while(a[i].k--){
            if(a[i].k<0)break;
            a[i].z++;
            ans+=a[i].c;
            if(exit()){
                printf("%lld",ans);
                return 0;}
            }
    }
}
