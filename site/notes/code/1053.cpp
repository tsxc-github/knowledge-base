#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int a,b,c,x;
int main()
{
    cin>>a>>b>>c;

    x=a>b? a:b;
    x=x>c? x:c;
    cout<<x;
    return 0;
}