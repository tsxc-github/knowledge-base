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
LL a[1145140];
LL n,m;
bool panduan(LL h){
    LL temp=0;
    for(LL i=0;i<n;i++){
        if(a[i]>h)
        temp+=a[i]-h;}
    return temp>=m;
}
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(LL i=0;i<n;i++){
        cin>>a[i];
    }
    LL left=0,right=1e10,middle,ans;
    while(left<=right){
        if(panduan(middle=(left+right>>1)))
        ans=middle,left=middle+1;
        else
        right=middle-1;
    }
    cout<<ans;
    return 0;
}
