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
string x[93];
bool a[20][20];
bool panduan(LL x,LL y){
    for(LL k=1;k<=n;k++){
        if(a[x][k]==true)
            return false;
        if(a[k][y]==true)
            return false;
        if(a[x-k][y-k]==true&&x-k>=1&&y-k>=1)
            return false;
        if(a[x-k][y+k]==true&&x-k>=1&&y+k<=n)
            return false;
        if(a[x+k][y-k]==true&&x+k<=n&&y-k>=1)
            return false;}  
    return true;
}
//八皇后问题
void dfs(LL i){
    if(i>n){
        ans++;
        return;
    }
    for(LL j=1;j<=n;j++){
        if(!panduan(i,j))continue;
        a[i][j]=true;
        if(i==n){
            temp++;
            x[temp].resize(8,'0');
            for(LL i=1;i<=n;i++)
            for(LL j=1;j<=n;j++)
                if(a[i][j]==true){
                x[temp][i-1]=j+'0';
                break;}}
        dfs(i+1);
        a[i][j]=false;
    }
}
int main(){
    n=8;
    dfs(1);
    cin>>n;
    for(LL i=0;i<n;i++){
        cin>>temp;
        printf("%s\n",x[temp].c_str());}
    return 0;
}
