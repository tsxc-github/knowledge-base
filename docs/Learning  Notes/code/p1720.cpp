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
    printf("%.2Lf",(LD)(pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5));
}
