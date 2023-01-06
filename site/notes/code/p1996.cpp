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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    queue<LL>q;
    for(LL i=1;i<=n;i++){
        q.push(i);}
    LL num=0;
    while(!q.empty()){
        LL x=q.front();
        q.pop();
        num++;
        if(num==m){
            printf("%lld ",x);
            num=0;}
        else
        q.push(x);}
    return 0;
}
