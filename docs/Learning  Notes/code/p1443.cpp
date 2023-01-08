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
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 501
struct dian{
    LL x,y;
    dian(LL x=0,LL y=0):x(x),y(y){};
};
LL a[MAX][MAX];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("out.txt","w",stdout);
    #endif
    LL n,m;
    cin>>n>>m;
    memset(a,-1,sizeof(a));
    LL x,y;
    cin>>x>>y;
    LL ans=-1;
    queue<dian>q,temp;
    q.push({x,y});
    while(!q.empty()){
        ans++;
        swap(q,temp);
        while(!temp.empty()){
            dian now=temp.front();
            temp.pop();
            if(now.x<=0||now.y<=0||now.x>m||now.y>n||(a[now.x][now.y]!=-1))continue;
            if(a[now.x][now.y]==-1)
            a[now.x][now.y]=ans;
            q.push({now.x+2,now.y+1});
            q.push({now.x+2,now.y-1});
            q.push({now.x-2,now.y+1});
            q.push({now.x-2,now.y-1});
            q.push({now.x+1,now.y+2});
            q.push({now.x+1,now.y-2});
            q.push({now.x-1,now.y+2});
            q.push({now.x-1,now.y-2});
        }
    }
    for(LL i=1;i<=n;i++){
    for(LL j=1;j<=m;j++)
        printf("%-5lld",a[i][j]);
        printf("\n");}
    return 0;
}
