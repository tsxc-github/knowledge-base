#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
int main(){
    string ISBN;
    cin>>ISBN;
    for(LL i=0;i<ISBN.size();i++)
    if(ISBN[i]=='-')
    ISBN.erase(i,1);
    char z=ISBN[ISBN.size()-1];
    ISBN.erase(ISBN.size()-1,1);
    LL temp=ISBN[0]-48;
    for(LL i=1;i<ISBN.size();i++)
    temp+=(ISBN[i]-48)*(i+1);
    char x=temp%11+48;
    if(x==58)
    x='X';
    if(x==z)
        cout<<"Right";
    else
        cout<<ISBN[0]<<'-'<<ISBN[1]<<ISBN[2]<<ISBN[3]<<'-'<<ISBN[4]<<ISBN[5]<<ISBN[6]<<ISBN[7]<<ISBN[8]<<'-'<<x;
}
