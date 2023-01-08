#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
int main(){
    LL s,hh;
    LL y,mm;
    cin>>s>>y;
    if(s%y==0)
    mm=s/y+10;
    else
    mm=s/y+11;
    mm=480-mm;
    if(mm<0)
    mm+=24*60;
    hh=mm/60;
    mm=mm%60;
    if(to_string(hh).size()==1)
    cout<<0;
    cout<<hh<<':';
    if(to_string(mm).size()==1)
    cout<<0;
    cout<<mm;
}
