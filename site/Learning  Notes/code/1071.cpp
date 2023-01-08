#include<iostream>
#include<cstdio>
#include<iomanip>

using namespace std;


    
int main(){
    long long a,k,a1=0,a2=1,a3=0;
    cin>>k;
    for(int i=1;i<k;i++){
        a3=a1+a2;
        a1=a2;
        a2=a3;

    }
    cout<<a3;
}
