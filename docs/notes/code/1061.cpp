#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x=0,y=0,a=0;
    long double z=0;
    cin>>a;
    long long i=a;
    while (i>0)
    {
        i--;
        scanf("%ld",&x);
        y=y+x;
    }
    z=(double)y/a;
    cout<<y<<' ';
    printf("%.5Lf",z);
    
}