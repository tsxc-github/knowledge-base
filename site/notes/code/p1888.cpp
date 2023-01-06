#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
void yf(LL &z,LL &m){
    for(LL i=2;i<sqrt(z)+1||i<sqrt(m)+1;i++){
        if(z%i==0)
        if(m%i==0){
            z/=i;
            m/=i;
        }
    }
}
void swap(LL &a,LL &b){
    LL z;
    z=a;
    a=b;
    b=z;
}
int main(){
    LL a,b,c,min,max;
    cin>>a>>b>>c;
    min=a;
    if(b<min)min=b;
    if(c<min)min=c;
    max=a;
    if(b>max)max=b;
    if(c>max)max=c;
    cout<<min/__gcd(min,max)<<'/'<<max/__gcd(max,min);
}
