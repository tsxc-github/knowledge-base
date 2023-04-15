#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL INF=1145141919810;
LL n,m,d,l;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m>>d>>l;
    LL s[n];
    for(LL i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s,s+n);
    LL k[m]={};
    for(LL i=0;i<n;i++){
        for(LL j=0;j<m;j++){
            if(s[i]-k[j]*d>=l){
                k[j]++;
                break;
            }
        }
    }
    LL ans=0;
    for(LL i=0;i<m;i++){
        ans+=k[i];
    }
    printf("%lld",ans);
    return 0;
}