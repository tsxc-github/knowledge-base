#include<iostream> 
#include<iomanip>
using namespace std;
double a,b,c,d,pi;
char x;

int main()
{
    pi=3.14159;
	cin>>a;
    b=a*2;
    c=2*a*pi;
    d=pi*a*a;
    x=' ';
    printf("%.4lf%c%.4lf%c%.4lf",b,x,c,x,d);
    return 0;
	
}
