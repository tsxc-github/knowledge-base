#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#include<ctime>
#include<random>
typedef long long LL;
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
struct dian{
    double x,y;
    dian(double x=0,double y=0):x(x),y(y){}
};
bool* flag;
map < dian,map < dian,double > > juli;
bool operator < (dian a,dian b){
    if(a.x!=b.x)
    return a.x<b.x;
    return a.y<b.y;}
double ans=1e16;
LL n;
void dfs(dian abc[],LL ceng,dian x,double now=0){
    if(now>=ans)return;
    if(ceng>n){
        ans=min(ans,now); 
        return;}
    if(clock()>=0.97*CLOCKS_PER_SEC){
        printf("%.2lf",ans);
        exit(0);}
    for(LL i=0;i<n;i++){
        if(flag[i])continue;
        flag[i]=true;
        if(juli[x][abc[i]]<0)
        dfs(abc,ceng+1,abc[i],now+juli[x][abc[i]]);
        else
        dfs(abc,ceng+1,abc[i],now+(juli[x][abc[i]]=sqrt((x.x-abc[i].x)*(x.x-abc[i].x)+(x.y-abc[i].y)*(x.y-abc[i].y))));
        flag[i]=false;}
}
int main(){
    dian* abc;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    flag=new bool[n];
    abc=new dian[n];
    memset(abc,0,sizeof(abc)*n);
    memset(flag,0,sizeof(flag)*n);
    LL temp;
    for(LL i=0;i<n;i++){
        cin>>temp;
        abc[i].x=temp;
        cin>>temp;
        abc[i].y=temp;}
    //dfs
    dfs(abc,1,(dian){0,0});
    printf("%.2lf",ans);
    return 0;
}