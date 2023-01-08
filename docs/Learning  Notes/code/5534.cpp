#include<iostream> 
#include<iomanip>
#include<cstdio>
using namespace std;
long long a,b,c,d,*list;

char x;

int main()
{
    long long a=0;
    
    cin>>b>>c>>d;
    c=c-b;
    for(long long i=1;i<=d;i++){
        a+=b;
        b=b+c;}
    cout<<a;
}
