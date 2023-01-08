#include<iostream> 
#include<iomanip>
using namespace std;
double a,b,c;

int main()
{
	cin>>a>>b;
	c=a/b;
	cout<<fixed<<setprecision(9)<<c;
	return 0;
}
