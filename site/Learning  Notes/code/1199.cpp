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
int main(){
    LL n,x;
    char a[1000]={};
    cin>>a;
    for(LL i=1;i<=n;i++)a[i]=i;
    for(LL i=1;i<=n;i++)printf("%c",a[i]);
    printf("\n");
    while(next_permutation(a+1,a+n+1)){
        for(LL i=1;i<=n;i++)printf("%c",a[i]);
        cout<<endl;
    }
    return 0;
}
