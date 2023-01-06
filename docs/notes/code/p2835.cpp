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
LL* a=new LL[MAX];
LL find(LL x){
    if(a[x]==x)return x;
    return a[x]=find(a[x]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m,p;
    cin>>n;
    for(LL i=1;i<=n;i++)a[i]=i;
    LL x,y,z;
    for(LL i=1;i<=n;i++){
        cin>>x;
        while(x!=0){
            a[find(x)]=find(i);
            cin>>x;}}
    LL ans=0;
    for(LL i=1;i<=n;i++){
        if(a[i]==i)
        ans++;}
    cout<<ans;
    return 0;
}
