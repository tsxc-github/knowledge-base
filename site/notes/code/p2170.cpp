#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL *a;
LL find(LL x){
    if(a[x]==0)
        return x;
    return a[x]=find(a[x]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m,k;
    cin>>n>>m>>k;
    a=new LL [n+1];
    memset(a,0,sizeof(LL)*(n+1));
    for(LL i=1;i<=k;i++){
        LL x,y;
        cin>>x>>y;
        a[find(x)]=find(y);
    }
    vector<LL>v;
    LL 
    for(LL i=1;i<=n;i++){
        
    }
}
