#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
LL a[MAX][MAX];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    memset(a,0,sizeof(a));
    printf("1\n");
    a[1][1]=1;
    for(LL i=2;i<=n;i++){
        for(LL j=1;j<=i;j++){
            a[i][j]=a[i-1][j]+a[i-1][j-1];
            printf("%lld ",a[i][j]);
        }
        printf("\n");
}
return 0;
}
