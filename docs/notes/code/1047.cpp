#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int a,b,c;
bool x;
int main()
{
    cin>>a;
    if(a%3==0) {cout<<"3 "; x=true;}


    if(a%5==0) {cout<<"5 "; x=true;}


    if(a%7==0) {cout<<"7"; x=true;}


    if(x!=true) {cout<<"n";}
    
}