#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main(){
    long long a;
    cin>>a;
    while (a!=1)
    {
        if(a%2==1){
            cout<<a<<"*3+1=";
            a=a*3+1;
            
        }
        else{
            cout<<a<<"/2=";
            a=a/2;
            
        }
        cout<<a<<endl;
    }
    cout<<"End";
    

}