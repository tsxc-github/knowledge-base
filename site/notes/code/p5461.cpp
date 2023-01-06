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
    cin>>n;
    for(LL i=0;i<(1<<n);i++){
        for(LL j=0;j<(1<<n);j++){
            printf("%ld ",((i|j)!=((1<<n)-1)?0:1));
        }
        printf("\n");}
    return 0;
}
