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
    LD n;
    cin>>n;
    if(n<=150)
        cout<<fixed<<setprecision(1)<<n*0.4463;
    if(n>=151&&n<=400)
        cout<<fixed<<setprecision(1)<<150*0.4463+(n-150)*0.4663;
    if(n>=401)
        cout<<fixed<<setprecision(1)<<150*0.4463+250*0.4663+(n-400)*0.5663;
}
