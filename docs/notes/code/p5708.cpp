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
//快排

int main(){
    double a,b,c,p;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    printf("%.1lf",sqrt(p*(p-a)*(p-b)*(p-c)));
    
}
