#include<bits/stdc++.h>
using namespace std;
#define LL long long
const LL INF=1145141919810;
const LL MAX=500005;
const LL MAX_2=20;
struct node{
    vector<LL>v;
};
LL n,m,root;
node *a;
LL f[MAX][MAX_2+1];
LL depth[MAX];
void dfs(){
    for(LL i=1;i<=MAX_2;i++)
        for(LL j=1;j<=n;j++){
            f[j][i]=f[f[j][i-1]][i-1];
        }
}
void findDepth(LL num,LL now){
    if(depth[num]!=0)
        return;
    depth[num]=now;
    for(LL i=0;i<a[num].v.size();i++){
        if(depth[a[num].v[i]]!=0)
            continue;
        f[a[num].v[i]][0]=num;
        findDepth(a[num].v[i],now+1);
    }
}
LL lca(LL x,LL y){
    if(x==0||y==0)
        return 0;
    if(depth[x]<depth[y])swap(x,y);
    if(depth[x]!=depth[y]){
        for(LL i=MAX_2;i>=0;i--)
            if((depth[x]-(1<<i))>=depth[y])
                x=f[x][i];
    }
    if(x==y)
        return x;
    for(LL i=MAX_2;i>=0;i--){
        if(f[x][i]==0||f[y][i]==0)
            continue;
        if(f[x][i]!=f[y][i]){
            x=f[x][i];
            y=f[y][i];
        }
    }
    return f[x][0];
}
int main(){
    cin>>n>>m>>root;
    a=new node [n+1];
    for(LL i=1;i<n;i++){
        LL  x,y;
        cin>>x>>y;
        a[x].v.push_back(y);
        a[y].v.push_back(x);
    }
    findDepth(root,1);
    // for(LL i=1;i<=n;i++){
    //     printf("%lld ",f[i][0]);
    // }
    dfs();
    for(LL i=0;i<m;i++){
        LL x,y;
        cin>>x>>y;
        printf("%lld\n",lca(x,y));
    }
}