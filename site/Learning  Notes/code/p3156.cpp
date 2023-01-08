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
    ios::sync_with_stdio(false);
    LL n,m,x;
    cin>>n>>m;
    LL* a=new LL [n];
    for(LL i=0;i<n;i++)cin>>a[i];
    for(LL i=0;i<m;i++){
        cin>> x;
        cout<<a[x-1]<<endl;
    }
    return 0;
}
