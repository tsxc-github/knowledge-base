#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main(){
    long long x=1,m;
    long long n=1;
    cin>>x;
    while (!(x==1))
    {
        
        n++;
        x=x/2;
        }
    cout<<n;
    
    
}
