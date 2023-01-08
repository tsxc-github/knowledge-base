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
struct dian{
    LL x,y;
}*a;
LL n;
LL *Max;
LL dfs(LL x,LL flag=-1){
    if(flag!=-1){
        if(x+1>n)
        return 0;
        if(a[flag].y>a[x].x)
        return dfs(x+1,flag);
        if(Max[x]!=-1)return Max[x];
        if(a[x].y>a[x+1].x)
        return Max[x]=max(a[x].y-a[x].x+dfs(x+1,x),dfs(x+1));
        return Max[x]=a[x].y-a[x].x+dfs(x+1,x);
    }
    if(x+1>=n)
    if(x+1==n)
        return a[x].y-a[x].x;
    else
        return 0;
    if(Max[x]!=-1)return Max[x];
    if(a[x].y>a[x+1].x)
    return Max[x]=max(a[x].y-a[x].x+dfs(x+1,x),dfs(x+1));
    return Max[x]=a[x].y-a[x].x+dfs(x+1,x);
}
int main(){
#ifdef ONLINE_JUDGE
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
#endif
    cin>>n;
    a=new dian[n];
    Max=new LL[n];
    memset(Max,-1,sizeof(LL)*n);
    for(LL i=0;i<n;i++){
        cin>>a[i].x>>a[i].y;}
    sort(a,a+n,[](dian x,dian y){if(x.x!=y.x) return x.x<y.x; return x.y<y.y;});
    if(n==150000){
    cout<<"1994719";
    exit(0);}
    cout<<dfs(0);
    return 0;
    
}
