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
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
struct dian
{
    LL x,y;
    dian *father;
    dian(LL x,LL y):x(x),y(y),father(this){}
    dian():father(this){}
};
void print(dian *a){
    if(a->father==a){
        return;}
    print(a->father);
    printf("(%lld, %lld)\n",a->x,a->y);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    bool a[5][5];
    dian d[5][5];
    for(LL i=0;i<5;i++){
        for(LL j=0;j<5;j++){
            cin>>a[i][j];
            d[i][j]={i,j};
        }
    }
    queue<dian>q;
    q.push(d[0][0]);
    while(!q.empty()){
        dian temp=q.front();
        q.pop();
        if(temp.x<0||temp.x>=5||temp.y<0||temp.y>=5)continue;
        if(temp.x==4&&temp.y==4){
            print(&d[temp.x][temp.y]);
            return 0;}
        a[temp.x][temp.y]=true;
        if(!(temp.x+1<0||temp.x+1>=5||temp.y<0||temp.y>=5||a[temp.x+1][temp.y]))q.push(d[temp.x+1][temp.y]),d[temp.x+1][temp.y].father=&d[temp.x][temp.y],a[temp.x+1][temp.y]=true;
        if(!(temp.x<0||temp.x>=5||temp.y+1<0||temp.y+1>=5||a[temp.x][temp.y+1]))q.push(d[temp.x][temp.y+1]),d[temp.x][temp.y+1].father=&d[temp.x][temp.y],a[temp.x][temp.y+1]=true;
        if(!(temp.x-1<0||temp.x-1>=5||temp.y<0||temp.y>=5||a[temp.x-1][temp.y]))q.push(d[temp.x-1][temp.y]),d[temp.x-1][temp.y].father=&d[temp.x][temp.y],a[temp.x-1][temp.y]=true;
        if(!(temp.x<0||temp.x>=5||temp.y-1<0||temp.y-1>=5||a[temp.x][temp.y-1]))q.push(d[temp.x][temp.y-1]),d[temp.x][temp.y-1].father=&d[temp.x][temp.y],a[temp.x][temp.y-1]=true;
        
    }
    cout<<"ERROR";
}
