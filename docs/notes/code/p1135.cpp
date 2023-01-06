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
queue<LL> q;
LL a[MAX]={};
bool v[MAX]={};
LL start,stop;
LL ans;
LL n;
void bfs(){
    while(!q.empty()){
    LL temp=q.size();
    while(temp--){
        LL now=q.front();
        q.pop();
        if(now<=0||now>n||v[now])continue;
        if(now==stop){
        cout<<ans;
        exit(0);}
        v[now]=true;
        q.push(now+a[now]);
        q.push(now-a[now]);}
        ans++;}
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>start>>stop;
    for(LL i=1;i<=n;i++){
        cin>>a[i];}
    q.push(start);
    bfs();
    cout<<"-1";
    return 0;
}   
