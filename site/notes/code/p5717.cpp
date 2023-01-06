#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
int main(){
    LL a,b,c;
    cin>>a>>b>>c;
    if(a>c)swap(a,c);
	if(b>c)swap(b,c);
	if(a>c)swap(a,c);
	if(b>c)swap(b,c);
    if(a+b>c){
        if(c*c==a*a+b*b)cout<<"Right triangle"<<endl;
        if(c*c<a*a+b*b)cout<<"Acute triangle"<<endl;
        if(c*c>a*a+b*b)cout<<"Obtuse triangle"<<endl;
        if(a==b)cout<<"Isosceles triangle"<<endl;
        if(a==b&&b==c&&c==a)cout<<"Equilateral triangle"<<endl;
    }
    else
    cout<<"Not triangle";
}
