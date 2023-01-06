#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<cctype>
#define LL long long
#define LD long double
using namespace std;
//没抄题解
int main(){
    LL n;
    while(cin>>n){
        cout<<(n*n*n*n-6*n*n*n+23*n*n-18*n+24)/24<<endl;
    }
    return 0;
}
