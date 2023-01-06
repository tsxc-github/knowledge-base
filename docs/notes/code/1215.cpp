#pragma GCC optimize(3)
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
#define MAX 200
LL n;
LL startx,starty;
LL endx,endy;
bool a[MAX][MAX];
struct dian{
    LL x,y;
};
void bfs(dian now){
    queue<dian>q;
    q.push(now);
    while(!q.empty()){
        now=q.front();
        q.pop();
        if(now.x<0||now.x>=n||now.y<0||now.y>=n||!a[now.x][now.y])continue;
        if(now.x==endx&&now.y==endy){
            printf("YES\n");
            return;}
        a[now.x][now.y]=false;
        q.push({now.x+1,now.y});
        q.push({now.x-1,now.y});
        q.push({now.x,now.y+1});
        q.push({now.x,now.y-1});}
    printf("NO\n");
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL k;
    cin>>k;
    for(LL i=0;i<k;i++){
        cin>>n;
        for(LL j=0;j<n;j++){
            for(LL k=0;k<n;k++){
                char temp;
                cin>>temp;
                a[j][k]=temp!='#';}}
        cin>>startx>>starty;
        cin>>endx>>endy;
        bfs(dian{startx,starty});
    }

}