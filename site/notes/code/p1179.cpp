#include<iostream>
#include<cstdio>
#include<iomanip>
#define LL long long
#define LD long double
using namespace std;


    
int main(){
    LL a=0,L,R;
    bool temp;
    cin>>L>>R;
    for(LL i=L;i<=R;i++){
        LL j=i;
        while(j>=1){
            if(j%10==2){
                a++;}
            j=j/10;
            }
    }
    cout<<a;
    
}
