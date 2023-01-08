#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<cmath>
#include<cctype>
#include<map>
#include<queue>
#include<vector>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
struct edge{
    LL to;
    LL v;
};
struct node{
    LL rd=0;
    vector<edge>v;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    node a[n+1];
    for(LL i=1;i<=n;i++){
        LL u,v,w;
        cin>>u>>v>>w;
        a[u].v.push_back({v,w});
        a[v].rd++;
    }
    LL ans=-1;
    queue<LL>q;
    q.push(1);
    while(!q.empty()){
        LL p=q.front();
        q.pop();
        if(p==n){
            ans=max(ans,)
        }
    }
}
