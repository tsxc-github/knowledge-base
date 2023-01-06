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
LL a[500];
int main(){
    ios::sync_with_stdio(false);
    LL n,x;
    cin>>n;
    for(LL i=0;i<n;i++){
        cin>>x;
        a[i]=x;}
    sort(a,a+n);
    LL h=0,i=0,j=n-1,ans=0;
    while(i<j){
        ans+=(a[j]-a[i])*(a[j]-a[i]);
        i++;
        ans+=(a[i]-a[j])*(a[i]-a[j]);
        j--;}
    cout<<ans;
    return 0;
}
