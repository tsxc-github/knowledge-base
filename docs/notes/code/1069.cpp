#include<math.h>
#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
long long a,b,n; 

int main()
{
    cin>>a>>n;
    b=a;
    if(n!=0){
        n-=1;
        for(;n>0;n--)b*=a;
            cout<<b;}
    else cout<<1;
    

}