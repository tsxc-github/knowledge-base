#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
char a,b,c;
int main()
{
    a=getchar();
    b=getchar();
    c=getchar();
    if(c!='0')cout<<c<<b<<a;
    else cout<<b<<a;
    
    return 0;
}   