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
    LL n,x;
    cin>>n;
    string a;
    cin>>a;
    for(LL i=0;i<a.size();i++){
        a[i]+=n;
        while(a[i]>'z'||a[i]<'a')
            a[i]-='a';}
    cout<<a<<endl;
    return 0;
}
