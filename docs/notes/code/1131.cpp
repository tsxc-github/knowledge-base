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
    LL x=0;
    LD n;
    string a,b;
    cin>>n>>a>>b;
    for(LL i=0;i<a.size();i++)
        if(a[i]==b[i])
        x++;
    if((LD)x/a.size()>n)
    cout<<"yes";
    else
    cout<<"no";
}
