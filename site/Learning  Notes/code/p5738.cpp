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
    LL n,m;
    cin>>n>>m;
    LL temp[114514]={};
    double ans[100005]={};
    for(LL i=0;i<n;i++){
        for(LL j=0;j<m;j++){
            cin>>temp[j];}
        sort(temp,temp+m);
        for(LL j=1;j<m-1;j++){
            ans[i]+=(double)temp[j]/(m-2);}
    }
    sort(ans,ans+n);
    cout<<fixed<<setprecision(2)<<ans[n-1]<<endl;
    return 0;
}
