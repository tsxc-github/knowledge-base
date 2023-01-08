#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int a,b,c;
bool x;
int main()
{
    cin>>a>>b;
    if(a<60) 
    c=c+1;
    
    
    if(b<60) 
    c=c+1;
    
    
    if(c==1) cout<<c;
    else cout<<"0";
}