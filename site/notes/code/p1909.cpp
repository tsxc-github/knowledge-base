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
    LL n,a1,b1,a2,b2,a3,b3,a,b,c,min;
    cin>>n;
    cin>>a1>>b1>>a2>>b2>>a3>>b3;
    a=ceil((double)n/a1)*b1;
    b=ceil((double)n/a2)*b2;
    c=ceil((double)n/a3)*b3;
    min=a;
    if(b<min)min=b;
    if(c<min)min=c;
    cout<<min;
}
