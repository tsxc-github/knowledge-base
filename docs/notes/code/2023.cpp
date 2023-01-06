#include<iostream> 
#include<iomanip>
#include<cstdio>
using namespace std;
long long a,min,max,d,*list;

char x;

int main()
{
    long long a=0,min=9223372036854775807,max=-9223372036854775807,z;
    long long i=0;
    double x;
    
    for(;cin>>z;i++){
        a+=z;
        if(z<min)min=z;
        if(z>max)max=z;}
    x=(double)a/i;
    cout<<min<<' '<<max<<' ';
    printf("%.3lf",x);
}
