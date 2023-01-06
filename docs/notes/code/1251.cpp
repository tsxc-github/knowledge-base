#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<queue>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
struct dian{
    LL x,y;
    dian(LL x=0,LL y=0):x(x),y(y){}
};
bool map[MAX][MAX];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL m,n;
    while(cin>>n>>m){
        if(n==0&&m==0)break;
        LL startx,starty;
        LL endx,endy;
        char temp;
        queue<dian> q;
        queue<dian> q1;
        queue<dian> qushi;
        for(LL i=0;i<n;i++){
            for(LL j=0;j<m;j++){
                cin>>temp;
                if(temp=='#')
                    map[i][j]=false;
                if(temp=='@'){
                    map[i][j]=true;
                    startx=i;
                    starty=j;
                    q1.push({i,j});}
                if(temp=='*'){
                    map[i][j]=true;
                    endx=i;
                    endy=j;}
                if(temp=='.')
                map[i][j]=true;}}
        LL ans=-1;
        bool flag=false;
        while(!q1.empty()){
            swap(q1,q);
            ans++;
            while(!q.empty()){
                dian now=q.front();
                q.pop();
                if(now.x<0||now.x>=n||now.y<0||now.y>=m)continue;
                if(!map[now.x][now.y])continue;
                if(now.x==endx&&now.y==endy){
                    swap(q1,qushi);
                    cout<<ans<<endl;
                    flag=true;
                    break;}
                map[now.x][now.y]=false;
                q1.push({now.x-1,now.y});
                q1.push({now.x+1,now.y});
                q1.push({now.x,now.y-1});
                q1.push({now.x,now.y+1});
            }}
        if(!flag)cout<<"-1"<<endl;
    };
    return 0;
}
