#include<iostream>
#include<cstdio>
#include<iomanip>
#include<math.h>
using namespace std;
    
int main(){
    long long i,j,n,a=1,x=1,b=0;
    bool temp=false;
    cin>>n;
    for(i=1;i<=n;i++){
        b+=a;
        x-=1;
        if(x==0)
            x=++a;
    }
    cout<<b;
}
