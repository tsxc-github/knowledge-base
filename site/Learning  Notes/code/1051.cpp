#include<iostream> 
#include<iomanip>
using namespace std;
float x,y,c;
int main()
{
	cin>>x;
    if(0<=x&&x<5) y=2.5-x;
    if(5<=x&&x<10) y=2-(1.5*(x-3)*(x-3));
    if(10<=x&&x<20)   y=x/2-1.5;
    printf("%.3f",y);
}