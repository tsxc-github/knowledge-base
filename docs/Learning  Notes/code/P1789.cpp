#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<cctype>
#define LL long long
#define LD long double
using namespace std;
LL n;
bool yj(LL x,LL y){
    if(x<1||y<1||x>n||y>n) return false;
    else return true;
}
int main(){
    LL m,k,x,y;
    cin>>n>>m>>k;
    short a[102][102]={};
    for(LL i=1;i<=m;i++){
        cin>>x>>y;
        a[x][y]=true;
        x--;
        y++;
        if(yj(x,y))
        a[x][y]=true;
        y-=2;
        if(yj(x,y))
        a[x][y]=true;
        y++;
        if(yj(x,y))
        a[x][y]=true;
        x--;
        if(yj(x,y))
        a[x][y]=true;
        x+=3;
        y++;
        if(yj(x,y))
        a[x][y]=true;
        y-=2;
        if(yj(x,y))
        a[x][y]=true;
        y++;
        if(yj(x,y))
        a[x][y]=true;
        x++;
        if(yj(x,y))
        a[x][y]=true;
        x-=2;
        y++;
        if(yj(x,y))
        a[x][y]=true;
        y++;
        if(yj(x,y))
        a[x][y]=true;
        y-=3;
        if(yj(x,y))
        a[x][y]=true;
        y--;
        if(yj(x,y))
        a[x][y]=true;}
    for(LL i=1;i<=k;i++){
        cin>>x>>y;
        x-=2;
        y-=2;
        for(LL i=1;i<=5;i++){
        for(LL j=1;j<=5;j++){
            if(yj(x,y))
            a[x][y]=true;
            x++;
        }y++;x-=5;}
    }
    
    LL answer=0;
    for(LL x=1;x<=n;x++){
    for(LL y=1;y<=n;y++){
        if(a[x][y]==false)
        answer++;
    }}
    cout<<answer;
}
