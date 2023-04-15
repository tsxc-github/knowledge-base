#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL INF=1145141919;
struct node{
    LL father;
    LL v;
};
int main(){
    LL n,m,k;
    cin>>n>>m>>k;
    node a[n+1];
    for(LL i=2;i<=n;i++){
        cin>>a[i].father>>a[i].v;
    }
    
    return 0;
}