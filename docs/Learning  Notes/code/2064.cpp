#include<iostream> 
#include<iomanip>
using namespace std;
int a,b,c;


int main()
{
	cin>>a>>b;
    c=b;
    b=a;
    a=c;
    cout<<a<<" "<<b;
    return 0;
	
}
