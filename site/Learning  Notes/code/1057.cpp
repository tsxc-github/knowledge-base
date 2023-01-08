#include<iostream> 
#include<iomanip>
using namespace std;
int a,b;
char c;

int main()
{
	cin>>a>>b>>c;
	switch(c)
	{
		case '+': cout<<a+b;break;
        case '-': cout<<a-b;break;
        case '*': cout<<a*b;break;
        case '/': if(b!=0){cout<<a/b;break;}
        else cout<<"Divided by zero!";break;
		default:cout<<"Invalid operator!";
	}
	return 0;
}