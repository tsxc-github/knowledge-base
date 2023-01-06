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
    LL n,x;
    cin>>n;
    string s1,s2;
    LL a,b;
    for(LL i=0;i<n;i++){
        cin>>s1;
        if(s1=="Rock")
        a=0;
        if(s1=="Scissors")
        a=1;
        if(s1=="Paper")
        a=2;
        cin>>s1;
        if(s1=="Rock")
        b=0;
        if(s1=="Scissors")
        b=1;
        if(s1=="Paper")
        b=2;
        if(a-b==0)
        cout<<"Tie"<<endl;
        if(a-b==1)
        cout<<"Player2"<<endl;
        if(a-b==2)
        cout<<"Player1"<<endl;
        if(a-b==-1)
        cout<<"Player1"<<endl;
        if(a-b==-2)
        cout<<"Player2"<<endl;
    }
    
}
