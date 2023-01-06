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
        stot++;
        return true;}
    if((x<1||x>n||y<1||y>m||a[x][y]||v[x][y]))return false;
    v[x][y]=true;
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
    ios::sync_with_stdio(false);
    cin>>n>>m;
    LL t;
    cin>>t;
    cin>>startx>>starty;
    cin>>endx>>endy;
    for(LL i=1;i<=t;i++){
        LL x,y;
        cin>>x>>y;
        a[x][y]=true;}
    if((a[startx][starty])||(a[endx][endy])){
        cout<<"0";
        return 0;
    }
    dfs(startx,starty);
    cout<<stot;
    return 0;
}
