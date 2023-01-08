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
#define MAX 101
struct dian{
    LL x,y;
    dian(LL x=0,LL y=0):x(x),y(y){};
};
bool v[MAX][MAX];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL m=100,n=100;
    dian a,b;
    cin>>a.x>>a.y>>b.x>>b.y;
    LL ans=-1,aans=-1,bans=-1;
    queue<dian>q,temp;
    q.push({1,1});
    while(!q.empty()&&(aans==-1||bans==-1)){
        ans++;
        swap(q,temp);
        while(!temp.empty()){
            dian now=temp.front();
            temp.pop();
            if(now.x<=0||now.y<=0||now.x>m||now.y>n||v[now.x][now.y])continue;
            if(now.x==a.x&&now.y==a.y){
                aans=ans;}
            if(now.x==b.x&&now.y==b.y){
                bans=ans;}
            v[now.x][now.y]=true;
            q.push({now.x+2,now.y+2});
            q.push({now.x+2,now.y-2});
            q.push({now.x-2,now.y+2});
            q.push({now.x-2,now.y-2});
            q.push({now.x+1,now.y+2});
            q.push({now.x+1,now.y-2});
            q.push({now.x-2,now.y+1});
            q.push({now.x-2,now.y-1});
            q.push({now.x+2,now.y+1});
            q.push({now.x+2,now.y-1});
            q.push({now.x-1,now.y+2});
            q.push({now.x-1,now.y-2});
        }
    }
    cout<<aans<<"\n"<<bans;
    return 0;
}
