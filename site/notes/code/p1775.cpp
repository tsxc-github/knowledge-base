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
#define MAX 1000

const LL SB=1145141919810;
LL n;
LL m[MAX];
LL dp[MAX][MAX];
LL dfs(LL i,LL j){
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(LL i=0;i<n;i++){
        cin>>m[i];
        
    }
    for(LL i=0;i<n;i++){
        for(LL j=0;j<n;j++){
            dp[i][j]=SB;
        }
        dp[0][i]=0;
    }
    cout<<dfs(0,0);
    return 0;
    
}
