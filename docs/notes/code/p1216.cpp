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
#include<vector>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    LL a[n][n];
    LL dp[n][n]={};
    for(LL i=0;i<n;i++){
        for(LL j=0;j<=i;j++){
            cin>>a[i][j];
        }
    }
    for(LL i=n-1;i>=0;i--){
        for(LL j=0;j<=i;j++){
            if(i==n-1)
                dp[i][j]=a[i][j];
            else{
                dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+a[i][j];
            }
        }
    }
    cout<<dp[0][0]<<endl;
    return 0;
}
