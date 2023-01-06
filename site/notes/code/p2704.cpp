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
#define MAXN 100
#define MAXM 10
bool map[MAXN][MAXM];
LL n,m;
inline bool hefa(LL x,LL y){
    if(x<0||x>=n||y<0||y>=m) return false;
    if(map[x][y]) return false;
    return true;}
void makekill(LL x,LL y){
    if(hefa(x,y))
    map[x][y]=false;
    if(hefa(x+1,y))
    map[x+1][y]=false;
    if(hefa(x+2,y))
    map[x+2][y]=false;
    if(hefa(x-1,y))
    map[x-1][y]=false;
    if(hefa(x-2,y))
    map[x-2][y]=false;
    if(hefa(x,y+1))
    map[x][y+1]=false;
    if(hefa(x,y+2))
    map[x][y+2]=false;
    if(hefa(x,y-1))
    map[x][y-1]=false;
    if(hefa(x,y-2))
    map[x][y-2]=false;}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(LL i=0;i<n;i++){
        for(LL j=0;j<n;j++){
            char sb;
            cin>>sb;
            if(sb=='P')
            map[i][j]=true;
            else
            map[i][j]=false;
        }
    }
    
}
