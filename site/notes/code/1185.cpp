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
    string a[110];
    LL i=0;
    for(;cin>>a[i];i++);
    sort(a,a+i);
    cout<<a[0]<<endl;
    for(LL j=1;j<=i;j++){
        if(a[j-1]!=a[j])
        cout<<a[j]<<endl;
    }
}
