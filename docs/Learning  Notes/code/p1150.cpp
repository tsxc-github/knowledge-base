#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
int main(){
    LL n,k,a=0,z=0;
    cin>>n>>k;
    while(true){
        a+=n;
        z+=n;
        if(a>=k){
            n=a/k;
            a=a%k;}
        else
        break;

    }
    cout<<z;
}
