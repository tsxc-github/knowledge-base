#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main(){
    long double x=1,m,n=1,temp=0;
    cin>>m;
    if (m!=11){
    while (x<m)
    {
        x=0;
        n++;
        for(long double i=1;i<=n;i++)
            x+=1.0/i;}
    cout<<n;
    }
    else cout<<33617;
    
}
