#include<bits/stdc++.h>
using namespace std;
#define LL long long
const LL INF=1145141919810;
const LL MAX=500005;
const LL MAX_2=20;
struct node{
    vector<LL>v;
    LL father;
};
node *a;
LL *dep;
LL *E;
LL *pos;
LL n,m;
LL tot=1;
void dfs(LL num,LL now){
    pos[num]=min(pos[num],tot);
    E[tot]=num;
    dep[tot++]=now;
    for(LL i=0;i<a[num].v.size();i++){
        
    }
}
int main(){
    cin>>n>>m;
    a=new node [n];
    dep=new LL [n];
    E=new LL [2<<n-1];
    pos=new LL [n];
    memset(dep,0,sizeof(LL)*n);
    memset(E,0,sizeof(LL)*(2<<n-1));
    memset(pos,0x7f,sizeof(LL)*n);
    for(LL i=1;i<n;i++){
        cin>>a[i].father;
        a[a[i].father].v.push_back(i);
    }
    dfs(0,1);
}