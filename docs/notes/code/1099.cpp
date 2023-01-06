#include<iostream>
#include<cstdio>
#include<iomanip>
#include<math.h>
using namespace std;
    
int main(){
    long long i,j,n,a=1,x=2;
    bool temp=false;
    cin>>n;
    if(n==1){
    cout<<2;return 0;}
    for(i=3;a!=n;i++){
        temp=true;
        for(j=2;j<=sqrt(i);j++)
            if(i%j==0){
                temp=false;break;}
        if(temp==true){
            a++;x=i;
        }
    }   
    cout<<x;
}
