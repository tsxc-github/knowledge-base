#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
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
const LL n=9,m=9;
struct asdf{
    LL num[m+1];
    LL zero;
    LL number;
}ditu[n+1];
bool gongge[4][4][10];
bool lie[10][10];
bool hang[10][10];
LL map[10][10];
void save(LL x,LL y,LL num){
    hang[x][num]=true;
    lie[y][num]=true;
    gongge[(LL)ceil((double)x/3)][(LL)ceil((double)y/3)][num]=true;
    map[x][y]=num;
}
void nosave(LL x,LL y,LL num){
    hang[x][num]=false;
    lie[y][num]=false;
    gongge[(LL)ceil((double)x/3)][(LL)ceil((double)y/3)][num]=false;
    map[x][y]=0;
}
bool find(LL x,LL y,LL num){
    if(hang[x][num])
    return false;
    if(lie[y][num])
    return false;
    if(gongge[(LL)ceil((double)x/3)][(LL)ceil((double)y/3)][num])
    return false;
    return true;
}
const LL f[10][10]={
    {0,0,0,0,0,0,0,0,0,0},
    {0,6,6,6,6,6,6,6,6,6},
    {0,6,7,7,7,7,7,7,7,6},
    {0,6,7,8,8,8,8,8,7,6},
    {0,6,7,8,9,9,9,8,7,6},
    {0,6,7,8,9,10,9,8,7,6},
    {0,6,7,8,9,9,9,8,7,6},
    {0,6,7,8,8,8,8,8,7,6},
    {0,6,7,7,7,7,7,7,7,6},
    {0,6,6,6,6,6,6,6,6,6}};
inline LL fenshu(LL x,LL y,LL num){
    return f[x][y]*num;
}
struct print{
    LL x,y;
};
vector<print>q;
LL ans=-1;
LL tot=0;
LL start=0;
void dfs(LL p,LL now){
    if(p==q.size()){
        for(LL i=1;i<=n;i++){
        for(LL j=1;j<=m;j++){
        printf("%lld ",map[i][j]);}puts("");}
        exit(0);
        return;}
    for(LL i=1;i<=n;i++){
        if(find(q[p].x,q[p].y,i)){
            save(q[p].x,q[p].y,i);
            dfs(p+1,now+fenshu(q[p].x,q[p].y,i));
            nosave(q[p].x,q[p].y,i);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(LL i=1;i<=n;i++){
        LL zero=0;
        for(LL j=1;j<=m;j++){
            cin>>ditu[i].num[j];
            if(!ditu[i].num[j])
            zero++;
            else{
                if(find(i,j,ditu[i].num[j])){
                save(i,j,ditu[i].num[j]),
                start+=fenshu(i,j,ditu[i].num[j]);}
                else{
                    printf("-1");
                    return 0;
                }
            }}
        ditu[i].zero=zero;
        ditu[i].number=i;}
    sort(ditu+1,ditu+1+n,
    [](asdf a,asdf b){
        return a.zero<b.zero;
    });
    for(LL i=1;i<=n;i++)
    for(LL j=1;j<=m;j++){
        if(!ditu[i].num[j])
        q.push_back({ditu[i].number,j});}
    dfs(0,start);
    return 0;
}
