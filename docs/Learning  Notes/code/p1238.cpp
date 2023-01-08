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
bool a[20][20];
LL n,m;
LL startx,starty;
LL endx,endy;
bool v[20][20];
LL tot=0;
LL num[MAX][2];
LL stot=0;
string ans[100];
bool dfs(LL x,LL y){
    if(x==endx&&y==endy){
        for(LL i=0;i<tot;i++){
            char temp[200];
        sprintf(temp,"%s(%lld,%lld)->",ans[stot].c_str(),num[i][0],num[i][1]);
        ans[stot]=temp;}
        char temp[200];
        sprintf(temp,"%s(%lld,%lld)\n",ans[stot].c_str(),x,y);
        ans[stot++]=temp;
        return true;}
    if(x<1||x>n||y<1||y>m||!a[x][y]||v[x][y]){return false;}
    v[x][y]=true;
    num[tot][0]=x;
    num[tot++][1]=y;
    bool temp=dfs(x-1,y);
    temp=dfs(x,y+1)||temp;
    temp=dfs(x+1,y)||temp;
    if(dfs(x,y-1)||temp){
        v[x][y]=false;
        tot--;
        return true;}
    tot--;
    v[x][y]=false;
    return false;
}

int main(){
#ifndef ONLINE_JUDGE
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
#endif
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(LL i=1;i<=n;i++)
        for(LL j=1;j<=m;j++){
            LL temp;
            cin>>temp;
            a[i][j]=temp;}
    cin>>startx>>starty;
    cin>>endx>>endy;
    if(!dfs(startx,starty))printf("-1");
    sort(ans,ans+stot);
    for(LL i=0;i<stot;i++)
        cout<<ans[i];
    return 0;
}
