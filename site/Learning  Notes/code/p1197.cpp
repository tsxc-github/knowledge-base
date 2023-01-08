#include<bits/stdc++.h>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 50000
#endif
struct to{
    LL x,y;
};
struct aaaaaaa{
    LL num;
    vector<LL> v;
};
vector<to> v;
LL father[MAX];
LL find(LL x){
    if(father[x]==x)
    return x;
    else
    return father[x]=find(father[x]);}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    for(LL i=0;i<n;i++)
    father[i]=i;
    for(LL i=0;i<m;i++){
        LL x,y;
        cin>>x>>y;
        v.push_back({x,y});}
    LL k;
    cin>>k;
    bool flag[n];
    memset(flag,0,sizeof(bool)*n);
    aaaaaaa kill[k];
    queue<LL> q;
    for(LL i=0;i<k;i++){
        LL temp;
        cin>>temp;
        flag[temp]=true;
        kill[i].num=temp;
        q.push(i);}
    while(!v.empty()){
        LL x=v.back().x;
        LL y=v.back().y;
        v.pop_back();
        if(flag[x]){
            
        }
    }

    
}
