#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main(){
    long long x=4000000,m,n;
    cin>>m>>n;
    while (m%x||n%x)
    {
        x--;
    }
    cout<<x;
}
