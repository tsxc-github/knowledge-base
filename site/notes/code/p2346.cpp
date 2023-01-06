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
#define MAX 114514
#endif
char a[10][10];
LL ans=1145141919810;
bool allright(){
    LL tot=0;
    for(LL i=1;i<=4;i++)
    if(a[i][1]==1)tot++;
    if(tot==4)return true;
    tot=0;
    for(LL i=1;i<=4;i++)
    if(a[i][2]==1)tot++;
    if(tot==4)return true;
    tot=0;
    for(LL i=1;i<=4;i++)
    if(a[i][3]==1)tot++;
    if(tot==4)return true;
    tot=0;
    for(LL i=1;i<=4;i++)
    if(a[i][4]==1)tot++;
    if(tot==4)return true;
    tot=0;
    for(LL i=1;i<=4;i++)
    if(a[1][i]==1)tot++;
    if(tot==4)return true;
    tot=0;
    for(LL i=1;i<=4;i++)
    if(a[2][i]==1)tot++;
    if(tot==4)return true;
    tot=0;
    for(LL i=1;i<=4;i++)
    if(a[3][i]==1)tot++;
    if(tot==4)return true;
    tot=0;
    for(LL i=1;i<=4;i++)
    if(a[4][i]==1)tot++;
    if(tot==4)return true;
    tot=0;
    for(LL i=1;i<=4;i++)
    if(a[i][1]==-1)tot++;
    if(tot==4)return true;
    tot=0;
    for(LL i=1;i<=4;i++)
    if(a[i][2]==-1)tot++;
    if(tot==4)return true;
    tot=0;
    for(LL i=1;i<=4;i++)
    if(a[i][3]==-1)tot++;
    if(tot==4)return true;
    tot=0;
    for(LL i=1;i<=4;i++)
    if(a[i][4]==-1)tot++;
    if(tot==4)return true;
    tot=0;
    for(LL i=1;i<=4;i++)
    if(a[1][i]==-1)tot++;
    if(tot==4)return true;
    tot=0;
    for(LL i=1;i<=4;i++)
    if(a[2][i]==-1)tot++;
    if(tot==4)return true;
    tot=0;
    for(LL i=1;i<=4;i++)
    if(a[3][i]==-1)tot++;
    if(tot==4)return true;
    tot=0;
    for(LL i=1;i<=4;i++)
    if(a[4][i]==-1)tot++;
    if(tot==4)return true;
    tot=0;
    if(a[1][1]==1&&a[2][2]==1&&a[3][3]==1&&a[4][4]==1)return true;
    if(a[1][4]==1&&a[2][3]==1&&a[3][2]==1&&a[4][1]==1)return true;
    if(a[1][1]==-1&&a[2][2]==-1&&a[3][3]==-1&&a[4][4]==-1)return true;
    if(a[1][4]==-1&&a[2][3]==-1&&a[3][2]==-1&&a[4][1]==-1)return true;
    return false;
}
void dfs(LL step,char now){
    if(step>ans||step>17)return;
    if(allright()){
        ans=min(ans,step);
        return;}
    for(LL i=1;i<=4;i++)
    for(LL j=1;j<=4;j++)
    if(a[i][j]!=0&&a[i][j]!=now){
        if(a[i+1][j]==0&&i+1>0&&i+1<=4&&j>0&&j<=4){
            swap(a[i+1][j],a[i][j]);
            dfs(step+1,-now);
            swap(a[i+1][j],a[i][j]);
        }
        if(a[i-1][j]==0&&i-1>0&&i-1<=4&&j>0&&j<=4){
            swap(a[i-1][j],a[i][j]);
            dfs(step+1,-now);
            swap(a[i-1][j],a[i][j]);
        }   
        if(a[i][j+1]==0&&i>0&&i<=4&&j+1>0&&j+1<=4){
            swap(a[i][j+1],a[i][j]);
            dfs(step+1,-now);
            swap(a[i][j+1],a[i][j]);
        }
        if(a[i][j-1]==0&&i>0&&i<=4&&j-1>0&&j-1<=4){
            swap(a[i][j-1],a[i][j]);
            dfs(step+1,-now);
            swap(a[i][j-1],a[i][j]);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(LL i=1;i<=4;i++)
    for(LL j=1;j<=4;j++){
        cin>>a[i][j];
        if(a[i][j]=='B')
        a[i][j]=1;
        if(a[i][j]=='W')    
        a[i][j]=-1;
        if(a[i][j]=='O')
        a[i][j]=0;}
    dfs(0,1);
    dfs(0,-1);
    cout<<ans<<endl;
    return 0;
}
