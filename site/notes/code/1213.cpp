#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<map>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
LL n,ans,temp,number;
bool a[20][20],lie[20],zuoxiexian[40],youxiexian[40];
bool panduan(LL x,LL y){
    if(lie[y])return false;
    if(zuoxiexian[x+y])return false;
    if(youxiexian[x-y+n])return false;
    return true;
}
//八皇后问题
void dfs(LL i){
    if(i>n){
        ans++;
        temp++;
        printf("No. %lld\n",ans);
        for(LL i=1;i<=n;i++){
        for(LL j=1;j<=n;j++)
        printf("%d ",(int)a[j][i]);
        printf("\n");}
        return;}
    
    for(LL j=1;j<=n;j++){
        if(!panduan(i,j))continue;
        a[i][j]=true;
        lie[j]=true;
        zuoxiexian[i+j]=true;
        youxiexian[i-j+n]=true;
        dfs(i+1);
        a[i][j]=false;
        lie[j]=false;
        zuoxiexian[i+j]=false;
        youxiexian[i-j+n]=false;
    }
}
int main(){
    n=8;
    dfs(1);
    return 0;
}
