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
LL akm(LL m,LL n){
    if(m==0){
        return n+1;
    }
    else if(m>0&&n==0){
        return akm(m-1,1);
    }
    else if(m>0&&n>0){
        return akm(m-1,akm(m,n-1));
    }
    return 0;
}
int main(){
    LL m,n;
    cin>>m>>n;
    cout<<akm(m,n);
}
