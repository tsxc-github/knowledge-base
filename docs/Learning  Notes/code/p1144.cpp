#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL MOD=100003;
struct node{
    vector<LL>v;
};
int main(){
    LL m,n;
    cin>>n>>m;
    node a[n+1];
    for(LL i=1;i<=m;i++){
        LL f,t;
        cin>>f>>t;
        a[f].v.push_back(t);
    }
    LL b[n+1]={};
    LL cnt[n+1]={};
    queue<LL>q;
    q.push(1);
    LL now=0;
    while(!q.empty()){
        now++;
        LL temp=q.size();
        for(LL k=0;k<temp;k++){
            LL p=q.front();
            q.pop();
            for(LL i=0;i<a[p].v.size();i++){
                q.push(a[p].v[i]);
            }
            if(b[p]==0||b[p]==now){
                b[p]=now;
                cnt[p]++;
                cnt[p]%=MOD;
            }
        }
        if(now>114514)
            break;
    }
    for(LL i=1;i<=n;i++){
        printf("%lld\n",cnt[i]);
    }
    return 0;
}