#include<iostream>
#include<cstdio>
#include<iomanip>

using namespace std;
long long a=0,b,c,d,n,x,y;
bool temp;
    
int main(){
    cin>>n;
    long long i,j;
    for(i=2;n%i;i++);
    j=n/i;
    if(i>=j)cout<<i;
    else cout<<j;
}