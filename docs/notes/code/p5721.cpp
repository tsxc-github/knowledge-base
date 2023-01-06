#include<iostream>
#include<cstdio>
#include<iomanip>

using namespace std;
long long b[4],c,d,n,x,y,a=1;

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            if(a<10)
            cout<<0;
            cout<<a++;}
        cout<<endl;
    }
}
