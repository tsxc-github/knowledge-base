#include<iostream> 
#include<iomanip>
using namespace std;
int a,b,c;
int main()
{
	cin>>a;
    b=a%4;
    if(a>4){
	switch(b)
	{
		case 3: c=a/4-2; cout<<"1 0 "<<c;break;
        case 2: c=a/4-1; cout<<"1 0 "<<c;break;
        case 1: c=a/4-1; cout<<"0 1 "<<c;break;
        case 0: c=a/4; cout<<"0 0 "<<c;break;
	}}
    else 
    if(a==4) cout<<"0 0 1"; 
    else cout<<"0 0 0";
	return 0;
}