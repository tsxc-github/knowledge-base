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
#define MAX 1000
struct dian
{
    LL x,y;
    dian(LL x=0,LL y=0):x(x),y(y) {}
};
bool map[MAX][MAX];
dian* chuan[MAX][MAX];
dian* chuan1[128];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL m,n;
    cin>>n>>m;
    LL startx,starty;
    LL endx,endy;
    LL tox,toy;
    char temp;
    queue<dian>q;
    queue<dian>q1;
    queue<dian>qushi;
    bool to=false;
    for(LL i=0;i<n;i++)
    {
        for(LL j=0;j<m;j++)
        {
            
            cin>>temp;
            if(temp=='#')
                map[i][j]=false;
            if(temp=='@')
            {
                map[i][j]=true;
                q1.push({i,j});
            }
            if(temp=='=')
            {
                map[i][j]=true;
                endx=i;
                endy=j;
            }
            if(temp=='.')
                map[i][j]=true;
            if(temp>='A'&&temp<='Z')
            {
                map[i][j]=true;
                if(chuan1[temp]==0)
                {
                    chuan[i][j]=new dian;
                    chuan[i][j]->x=i;
                    chuan[i][j]->y=j;
                    chuan1[temp]=chuan[i][j];}
                else{
                    chuan[i][j]=new dian;
                    chuan[i][j]->x=chuan1[temp]->x;
                    chuan[i][j]->y=chuan1[temp]->y;
                    chuan1[temp]->x=i;
                    chuan1[temp]->y=j;
                }
            }
        }
    }
    LL ans=-1;
    bool flag=false;
    while(!q1.empty())
    {
        swap(q1,q);
        ans++;
        while(!q.empty())
        {
            dian now=q.front();
            q.pop();
            if(chuan[now.x][now.y]!=0){
                LL tempx=now.x;
                LL tempy=now.y;
                now.x=chuan[tempx][tempy]->x;
                now.y=chuan[tempx][tempy]->y;
            }
            if(now.x<0||now.x>=n||now.y<0||now.y>=m)
                continue;
            if(!map[now.x][now.y])
                continue;
            
            if(now.x==endx&&now.y==endy)
            {
                swap(q1,qushi);
                cout<<ans<<endl;
                flag=true;
                break;
            }
            map[now.x][now.y]=false;
            q1.push({now.x-1,now.y});
            q1.push({now.x+1,now.y});
            q1.push({now.x,now.y-1});
            q1.push({now.x,now.y+1});
        }
    }
    if(!flag)
        cout<<"-1"<<endl;
    return 0;
}
