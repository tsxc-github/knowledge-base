#include<iostream>
#include<cstdio>
#include<iomanip>

using namespace std;
long long b[4],c,d,n,x,y,a=1;

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a<10)
            cout<<0;
            cout<<a++;}
        cout<<endl;}
    cout<<endl;
    a=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=(n-i)*2;k++)
            cout<<' ';
        for(int j=1;j<=i;j++){
            if(a<10)
            cout<<0;
            cout<<a++;}
        cout<<endl;
    }
}
