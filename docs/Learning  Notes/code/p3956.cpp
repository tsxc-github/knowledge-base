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
#define MAX 1145
#endif
char mp[MAX][MAX];
bool v[MAX][MAX];
LL n,m;
LL ans=1145141919810;
void dfs(LL x,LL y,LL money=0,bool magic=false){
    if(money>ans)return;
    if(x>n||y>m)return;
    if(x<=0||y<=0)return;
    if(x==m&&y==m){
        ans=min(ans,money);
        return;}
    char now=mp[x][y];
    if(magic==true)mp[x][y]=0;
    if(mp[x+1][y]==now&&mp[x+1][y]!=0&&v[x+1][y]==false){
        v[x][y]=true;
        dfs(x+1,y,money,false);
        v[x][y]=false;}
    else{
    if(mp[x+1][y]!=now&&mp[x+1][y]!=0&&v[x+1][y]==false){
        v[x][y]=true;
        dfs(x+1,y,money+1,false);
        v[x][y]=false;}
    else{
        if(magic==false&&v[x+1][y]==false){
        mp[x+1][y]=now;
        v[x][y]=true;
        dfs(x+1,y,money+2,true);
        v[x][y]=false;}
        if(magic==false&&v[x+1][y]==false){
        mp[x+1][y]=-now;
        v[x][y]=true;
        dfs(x+1,y,money+3,true);
        v[x][y]=false;}
        }}
    if(mp[x][y+1]==now&&mp[x][y+1]!=0&&v[x][y+1]==false){
        v[x][y]=true;
        dfs(x,y+1,money,false);
        v[x][y]=false;}
    else{
    if(mp[x][y+1]!=now&&mp[x][y+1]!=0&&v[x][y+1]==false){
        v[x][y]=true;
        dfs(x,y+1,money+1,false);
        v[x][y]=false;}
    else{
        if(magic==false&&v[x][y+1]==false){
        mp[x][y+1]=now;
        v[x][y]=true;
        dfs(x,y+1,money+2,true);
        v[x][y]=false;}
        if(magic==false&&v[x][y+1]==false){
        mp[x][y+1]=-now;
        v[x][y]=true;
        dfs(x,y+1,money+3,true);
        v[x][y]=false;}
        }}
    if(mp[x-1][y]==now&&mp[x-1][y]!=0&&v[x-1][y]==false){
        v[x][y]=true;
        dfs(x-1,y,money,false);
        v[x][y]=false;}
    else{
    if(mp[x-1][y]!=now&&mp[x-1][y]!=0&&v[x-1][y]==false){
        v[x][y]=true;
        dfs(x-1,y,money+1,false);
        v[x][y]=false;}
    else{
        if(magic==false&&v[x-1][y]==false){
        mp[x-1][y]=now;
        v[x][y]=true;
        dfs(x-1,y,money+2,true);
        v[x][y]=false;}
        if(magic==false&&v[x-1][y]==false){
        mp[x-1][y]=-now;
        v[x][y]=true;
        dfs(x-1,y,money+3,true);
        v[x][y]=false;}
        }}
    if(mp[x][y-1]==now&&mp[x][y-1]!=0&&v[x][y-1]==false){
        v[x][y]=true;
        dfs(x,y-1,money,false);
        v[x][y]=false;}
    else{
    if(mp[x][y-1]!=now&&mp[x][y-1]!=0&&v[x][y-1]==false){
        v[x][y]=true;
        dfs(x,y-1,money+1,false);
        v[x][y]=false;}
    else{
        if(magic==false&&v[x][y-1]==false){
        mp[x][y-1]=now;
        v[x][y]=true;
        dfs(x,y-1,money+2,true);
        v[x][y]=false;}
        if(magic==false&&v[x][y-1]==false){
        mp[x][y-1]=-now;
        v[x][y]=true;
        dfs(x,y-1,money+3,true);
        v[x][y]=false;}
        }}}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>m>>n;
    for(LL i=0;i<n;i++){
        LL x,y,c;
        cin>>x>>y>>c;
        if(c==1)
        mp[x][y]=1;
        else
        mp[x][y]=-1;
    }
    dfs(1,1);
    if(ans==1145141919810)
    printf("-1");
    else
    printf("%lld",ans);
    return 0;
}
