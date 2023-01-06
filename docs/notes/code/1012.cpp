#include<iostream> 
#include<iomanip>
using namespace std;
double a,b,c,d,x,end;

int main()
{
	cin>>x>>a>>b>>c>>d;
	a=a*x*x*x;
	b=b*x*x;
	c=c*x;
	end=a+b+c+d;
	
	cout<<fixed<<setprecision(7)<<end;

	return 0;
}
