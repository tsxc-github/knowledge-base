#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
unsigned long long a,b=2,c;
int main()
{
    cin>>a;
    
    if(a!=0){
    a-=1;
    while (a>0)
    {
        b=b*2;
        a-=1;
    }
    cout<<b;}else cout<<1;
    
}   