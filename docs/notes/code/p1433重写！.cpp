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
#define LD double
#define US unsigned short
using namespace std;
#define MAX 20
struct dian{
    LD x,y;
}nainao[MAX];
LL n;
bool v[MAX];
LD ju[20][20];
LD ans=114514;
inline LD juli(LL x,LL y){
    return ju[x][y];
}
void dfs(LL x,LD now){
    if(now>ans)
    return;
    bool flag=false;
    for(LL i=1;i<=n;i++){
        if(v[i])
        continue;
        flag=true;
        v[i]=true;
        dfs(i,now+juli(x,i));
        v[i]=false;}
    if(!flag){
        ans=min(now,ans);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(LL i=1;i<=n;i++)
    cin>>nainao[i].x>>nainao[i].y;
    nainao[0]={0,0};
    for(LL x=0;x<=n;x++){
    for(LL y=0;y<=n;y++){
        ju[x][y]=sqrt(((nainao[x].x-nainao[y].x)*(nainao[x].x-nainao[y].x))+((nainao[x].y-nainao[y].y)*(nainao[x].y-nainao[y].y)));
    }}
    dfs(0,0);
    printf("%.2lf",ans);
    return 0;
}
