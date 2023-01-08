#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
int main(){
    LL n,x;
    cin>>n;
    for(LL z=1;z<=114514000;z++){
        x=z;
        for(LL j=1;j<n;j++)
            x=x/2-1;
        if(x==1){
            cout<<z;
            break;
        }
    }
}
