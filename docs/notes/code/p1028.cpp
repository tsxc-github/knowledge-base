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
LL f1[114514];
LL dfs(LL n){
    if(f1[n]!=-1)
    return f1[n];
    LL ans=0;
    for(LL i=1;i<=n/2;i++){
        f1[i]=dfs(i);
        ans+=f1[i]+1;}
    return f1[n]=ans;
}
int main(){
    ios::sync_with_stdio(false);
    memset(f1,-1,sizeof(f1));
    LL n,x=1;
    cin>>n;
    cout<<dfs(n)+1<<endl;
    return 0;
}
