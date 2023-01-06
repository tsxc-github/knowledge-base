#include<iostream> 
#include<iomanip>
#include<math.h>
using namespace std;
double a1,a2,n,a;

int main()
{
	cin>>a1>>a2>>n;
	a=a2-a1;
	a=(n-1)*a;
	a=a1+a;
	cout<<a;
	return 0;
}
