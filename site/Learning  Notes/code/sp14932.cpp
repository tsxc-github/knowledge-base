#include<bits/stdc++.h>
using namespace std;
#define LL long long
const LL MAX_2=22;
const LL MAX=1<<MAX_2;
int main(){
    LL T;
    cin>>T;
    while(T--){
        LL n;
        cin>>n;
        LL rd[n+1]={};
        LL f[n+1][(LL)ceil(log2((double)n))+1]={};
        for(LL i=1;i<=n;i++){
            LL m;
            cin>>m;
            rd[i]+=m;
            for(LL j=0;j<m;j++){
                LL t;
                cin>>t;
                f[t][0]=i;
            }
        }
    }
}
