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
    LL a[n];
    LL dpmin[n][n]={};
    for(LL i=0;i<n;i++){
        cin>>a[i];
        dpmin[i][0]=a[i];
    }
    for(LL i=1;i<n;i++){
        for(LL j=0;j<n-i;j++){
            dpmin[i][j]=min(dpmin[i-1][j]+dpmin[i-1][j+1],);
        }
    }
}
