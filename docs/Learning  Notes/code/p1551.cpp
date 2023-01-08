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
LL* a=new LL[MAX]+MAX/2;
LL find(LL x){
    if(a[x]==x)return x;
    return a[x]=find(a[x]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m,p;
    cin>>n>>m>>p;
    for(LL i=1;i<=n;i++)a[i]=i;
    LL x,y,z;
    for(LL i=1;i<=m;i++){
        cin>>x>>y;
        a[find(x)]=find(y);}
    for(LL i=1;i<=p;i++){
        cin>>x>>y;
        if(find(x)==find(y))
        printf("Yes\n");
        else printf("No\n");}
    return 0;
}
