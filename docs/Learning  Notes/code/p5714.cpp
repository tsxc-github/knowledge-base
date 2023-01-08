#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<cctype>
#define LL long long
#define LD long double
using namespace std;
int main(){
    LD m,h;
    cin>>m>>h;
    m=m/(h*h);
    if(m<18.5)cout<<"Underweight";
    else if(m>=18.5&&m<24)cout<<"Normal";
    else if(m>=24)cout<<m<<endl<<"Overweight";
    return 0;
}
