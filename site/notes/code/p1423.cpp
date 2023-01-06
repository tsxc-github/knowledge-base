#include<iostream>
#include<cstdio>
#include<iomanip>
#define LL long long
#define LD long double
using namespace std;


    
int main(){
    LD x=2,a,i=1,z=2;
    cin>>a;
    for(i=1;x<a;++i){
        z*=0.98;
        x+=z;
    }
    cout<<i;
    
}
