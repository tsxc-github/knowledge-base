#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<vector>
#include<queue>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
struct map{
    vector<LL>next;
}a[MAX];
bool v[MAX];
void dfs(LL x){
    printf("%lld ",x);
    v[x]=true;
    sort(a[x].next.begin(),a[x].next.end());
    for(LL i=0;i<a[x].next.size();i++){
        if(v[a[x].next[i]])continue;
        dfs(a[x].next[i]);
    }
}
queue<LL>q;
void bfs(LL x){
    printf("%lld ",x);
    v[x]=true;
    sort(a[x].next.begin(),a[x].next.end());
    for(LL i=0;i<a[x].next.size();i++){
        if(v[a[x].next[i]])continue;
        q.push(a[x].next[i]);}
    while(!q.empty()){
        LL temp=q.front();
        q.pop();
        if(v[temp])continue;
        bfs(temp);}
}

int main(){
    ios::sync_with_stdio(false);
    LL n,m;
    cin>>n>>m;
    //初始化
    for(LL i=0;i<m;i++){
        LL temp1,temp2;
        cin>>temp1>>temp2;
        a[temp1].next.push_back(temp2);}
    dfs(1);
    printf("\n");
    memset(v,false,sizeof(v));
    bfs(1);
    return 0;
}
