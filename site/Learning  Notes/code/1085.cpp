#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main(){
    double x=1,h,h1=0,temp=0;
    cin>>h;
    h1=h;temp=h/2;
    for(int i=1;i<10;i++){
        
        h1+=temp*2;
        temp=temp/2;
    }
    cout<<h1<<endl;
    cout<<temp;

}