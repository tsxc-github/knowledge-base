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
struct p4913
{
    LL left,right;
};
p4913 a[1000005];
LL dfs(LL i){
    if(i==0)return 0;
    return max(dfs(a[i].left),dfs(a[i].right))+1;
}
int main(){
    ios::sync_with_stdio(false);
    LL n,x;
    cin>>n;
    //输入
    for(LL i=1;i<=n;i++){
        cin>>a[i].left>>a[i].right;}
    cout<<dfs(1);
    return 0;
}
