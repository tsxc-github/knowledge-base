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
    vector<edge>v;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    node g[n+1];
    for(LL i=1;i<=m;i++){
        LL a,b,c;
        cin>>a>>b>>c;
        g[a].v.push_back({b,c});
    }
    LL d[n+1];
    for(LL i=0;i<n+1;i++)
        d[i]=1145141919810;
    bool b[n+1]={};
    d[1]=0;
    for(LL i=1;i<n;i++){
        LL t=-1;
        for(LL j=2;j<=n;j++){
            if(b[j]!=true){
                if(t==-1||d[j]<d[t])
                    t=j;
            }
        }
        b[t]=true;
        for(LL j=0;j<;j++){
            d[j]=min(d[j],d[i]+)
        }
    }
    
    if(d[n]==1145141919810)
        printf("-1");
    else
        printf("%lld",d[n]);
    return 0;
}
