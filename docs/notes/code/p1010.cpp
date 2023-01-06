#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
void micifang(LL n){
    if(n==1)
    return ;
    if(n==0)
    printf("(0)");
    
}
int main(){
    LL n,z=1,x=0;
    cin>>n;
    string a="";
    while(n>=1){
        if(n&z){
            x+=1;
        }
        n>>1;
        

    }
}
