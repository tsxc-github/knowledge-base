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
    LL n,x,temp,now=0;
    cin>>x>>n;
    now=x;
    for(LL i=0;i<n;i++){
        cin>>temp;
        now+=x;
        now-=temp;
        if(now+x<0){
            cout<<0;
            return 0;}
        
    }
    cout<<now;
    return 0;
}
