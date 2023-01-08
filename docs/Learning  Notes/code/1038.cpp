#include<math.h>
#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
double n,x,y,d;
int main()
{
    cin>>n>>x>>y;
    
    d=(n-ceil(y/x));
    if(d<=0) cout<<0;
    else cout<<d;
    
    return 0;
}