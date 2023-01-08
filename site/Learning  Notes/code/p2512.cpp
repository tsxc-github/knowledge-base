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
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,x;
    cin>>n;
    LL a[MAX],middle=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        middle+=a[i];
    }
    LL ans=0;
    middle/=n;
    for(LL i=0;i<n;i++){
        if(a[i]!=middle){
            a[i+1]+=a[i]-middle;
            ans++;}
    }
    cout<<ans<<endl;
    return 0;
}
