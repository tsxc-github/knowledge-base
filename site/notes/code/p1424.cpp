#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#define LL long long
#define LD long double
using namespace std;


    
int main(){
    LL L,R,m,temp,x=0,n,a=0,z=1;
    cin>>x>>n;
    for(LL i=1;i<=n;i++){
        if(x==8)
            x=1;
        if(x!=6&&x!=7)
            a+=250;
        x++;
    }
    cout<<a;
    
}
