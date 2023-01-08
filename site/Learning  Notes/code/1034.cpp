#include<iostream> 
#include<iomanip>
#include<cmath>
using namespace std;
double x1,x2,y2,x3,y3,a,b,c,p;
double y;
int main()
{
	cin>>x1>>y>>x2>>y2>>x3>>y3;
	a=(x3-x2)*(y-y2)-(x1-x2)*(y3-y2);
	a=a/2;
	abs(a);
	a=x1*y2+x2*y3+x3*y-x1*y3-x2*y-x3*y2;
	a=a/2;
	abs(a);
	cout<<fixed<<setprecision(2)<<a;
	
	
	
	
	

	return 0;
}
