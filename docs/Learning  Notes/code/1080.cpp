#include<iostream>
#include<cstdio>
#include<iomanip>

using namespace std;
long long a,b,c,d,n,x,y;

    
int main(){
    cin>>a>>b>>c;
    for(x=3;!(a%x==b%x&&b%x==c%x);x++);
    cout<<x;
}
