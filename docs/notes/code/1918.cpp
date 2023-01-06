#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main(){
    long double x=1,m;
    long long n=1;
    cin>>m;
    while (x<=m)
    {
        
        n++;
        x+=1.0/n;
        }
    cout<<n;
    
    
}
