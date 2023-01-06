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
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 2000
struct dian{
    LL x,y;
    dian* father=this;
    dian(LL x,LL y){
        this->x=x;
        this->y=y;
    }};
dian* d[MAX][MAX];
bool v[MAX][MAX];
LL n,m;
queue<dian>q;
dian* find(dian* x){
    if(x->father==x)return x;
    return x->father=find(x->father);}
void dfs(LL x,LL y,dian* father=NULL){
    if(x<0||y<0||x>=n||y>=m)return;
    if(!d[x][y]||v[x][y])return;
    v[x][y]=true;
    if(d[x][y]->father==d[x][y])
    d[x][y]->father=father? find(father):find(d[x][y]);
    else find(d[x][y])->father=father? find(father):find(d[x][y]);
    dfs(x+1,y,d[x][y]->father);
    dfs(x-1,y,d[x][y]->father);
    dfs(x,y+1,d[x][y]->father);
    dfs(x,y-1,d[x][y]->father);
    dfs(x+1,y+1,d[x][y]->father);
    dfs(x-1,y-1,d[x][y]->father);
    dfs(x-1,y+1,d[x][y]->father);
    dfs(x+1,y-1,d[x][y]->father);}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(LL i=0;i<n;i++)
    for(LL j=0;j<m;j++){
        char temp;
        cin>>temp;
        if(temp=='W'){
            d[i][j]=new dian(i,j);
            q.push(*d[i][j]);}}
    while(!q.empty()){
        if(q.front().father!=&q.front())
    dfs(q.front().x,q.front().y);
    q.pop();}
    LL ans=0;
    for(LL i=0;i<n;i++)
    for(LL j=0;j<m;j++){
        if(d[i][j]!=NULL){
            if(d[i][j]->father==d[i][j])
            ans++;}}
    cout<<ans;
    return 0;
}

