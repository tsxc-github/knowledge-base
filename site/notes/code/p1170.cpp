#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
int main(){
    LL n,x1,y1,x2,y2;
    cin>>n;
    for(LL i=0;i<n;i++){
        cin>>x1>>y1>>x2>>y2;
        if(__gcd(abs(x1-x2),abs(y1-y2))!=1)
            cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
