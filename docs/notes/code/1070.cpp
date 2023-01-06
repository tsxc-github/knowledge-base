#include<iostream>
#include<cstdio>
#include<iomanip>

using namespace std;


    
int main(){
    double x,k=0,n;
    cin>>x>>n;
    for(int i=1;i<=n;i++){
        x+=x*0.001;
    }
    
    printf("%.4lf",x);
}
