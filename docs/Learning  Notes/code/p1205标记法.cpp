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
#define MAX 40000
#endif
LL n;
bool hang[MAX],lie[MAX],zuoxiexian[MAX],youxiexian[MAX];
bool panduan(LL x,LL y){
    if(hang[x])return false;
    if(lie[y])return false;
    if(zuoxiexian[x+y])return false;
    if(youxiexian[x-y+n])return false;
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    LL m,k;
    cin>>n>>m>>k;
    for(LL i=0;i<k;i++){
        LL x,y;
        cin>>x>>y;
        hang[x]=true;
        lie[y]=true;
        zuoxiexian[x+y]=true;
        youxiexian[x-y+n]=true;
    }
    LL ans=0;
    for(LL i=1;i<=n;i++){
        for(LL j=1;j<=m;j++){
            if(panduan(i,j))ans++;}}
    cout<<ans;
    return 0;
}
