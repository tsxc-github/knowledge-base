#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<queue>
#include<map>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 1000
struct dian{
    LL x,y;
    dian(LL x=-1,LL y=-1):x(x),y(y){}
};
LL MMAP[MAX][MAX];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL m,n,x,y,t;
    memset(MMAP,-1,sizeof(MMAP));
    cin>> m;
        LL startx,starty;
        LL endx,endy;
        char temp;
        queue<dian> q;
        queue<dian> q1;
        queue<dian> qushi;
        for(LL i=0;i<m;i++){
            cin>>x>>y>>t;
            if(MMAP[x][y]==-1)
            MMAP[x][y]=9223372036854775807;
            if(MMAP[x+1][y]==-1)
            MMAP[x+1][y]=9223372036854775807;
            if(x-1>=0&&MMAP[x-1][y]==-1)
            MMAP[x-1][y]=9223372036854775807;
            if(MMAP[x][y+1]==-1)
            MMAP[x][y+1]=9223372036854775807;
            if(y-1>=0&&MMAP[x][y-1]==-1)
            MMAP[x][y-1]=9223372036854775807;
            MMAP[x][y]=min(MMAP[x][y],t);
            MMAP[x+1][y]=min(MMAP[x+1][y],t);
            MMAP[x][y+1]=min(MMAP[x][y+1],t);
            if(x-1>=0)
            MMAP[x-1][y]=min(MMAP[x-1][y],t);
            if(y-1>=0)
            MMAP[x][y-1]=min(MMAP[x][y-1],t);
        }
        LL ans=-1;
        bool flag=false;
        q1.push({0,0});
        while(!q1.empty()){
            swap(q1,q);
            ans++;
            while(!q.empty()){
                dian now=q.front();
                q.pop();
                if(now.x<0||now.y<0)continue;
                if(MMAP[now.x][now.y]==-1){
                    cout<<ans<<endl;
                    flag=true;
                    return 0;}
                if(MMAP[now.x][now.y]<=ans)continue;
                MMAP[now.x][now.y]=0;
                q1.push({now.x-1,now.y});
                q1.push({now.x+1,now.y});
                q1.push({now.x,now.y-1});
                q1.push({now.x,now.y+1});
            }}
        if(!flag)cout<<"-1"<<endl;
    return 0;
}
