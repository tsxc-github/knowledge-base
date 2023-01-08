#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){
    long long a,b,e=0;
    bool temp=false;
    string c;
    cin>>c;
    while(c[0]=='0')c.erase(0,1);
    for(long long i=c.size()-1;0<=i;i--){
        if(c[i]=='0'&&temp==false);
        else{
            temp=true;
            cout<<c[i]<<' ';}}
}