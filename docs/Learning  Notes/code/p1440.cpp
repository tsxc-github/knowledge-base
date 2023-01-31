#include<bits/stdc++.h>
using namespace std;
#define LL int
const LL MAX_2=22;
const LL MAX=1<<MAX_2;
LL n,m;
// LL mmax[MAX][MAX_2+1];
int mmin[MAX][MAX_2+1];
// LL ansmax(LL l,LL r){
//     LL x=log2(r-l+1);
//     return max(mmax[l][x],mmax[r+1-(1<<x)][x]);
// }
LL ansmin(LL l,LL r){
    LL x=log2(r-l+1);
    return min(mmin[l][x],mmin[r+1-(1<<x)][x]);
}
int main(){
    cin>>n>>m;
    for(LL i=0;i<n;i++){
        cin>>mmin[i][0];
        // mmax[i][0]=mmin[i][0];
    }
    for(LL j=1;j<=MAX_2;j++){
        for(LL i=0;i<n;i++){
            // mmax[i][j]=max(mmax[i][j-1],mmax[i+(1<<j-1)][j-1]);
            mmin[i][j]=min(mmin[i][j-1],mmin[i+(1<<j-1)][j-1]);
        }
    }
    printf("%lld\n",0);
    for(LL i=1;i<n;i++){
        printf("%lld\n",ansmin(max((LL)0,(LL)i-m),i-1));
    }
    return 0;
}