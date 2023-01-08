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
    LL a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    e=c-a;
    f=d-b;
    if(f<0){
        e--;
        f+=60;
    }
    cout<<e<<' '<<f;
}
