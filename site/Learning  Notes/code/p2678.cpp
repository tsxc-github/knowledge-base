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
LL a[MAX];
LL l,n,m;
bool panduan(LL h){
    LL temp=0,tot=0;
    for(LL i=0;i<n;i++){
        if(a[i]-temp<h)
        tot++;
        temp=a[i];
        if(tot>m)
        return false;}
    if(l-temp<h)
    tot++;
    if(tot>m)
    return false;
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin>>l>>n>>m;
    for(LL i=0;i<n;i++){
        cin>>a[i];
    }
    LL left=0,right=l,middle;
    while(right>left){
        LL middle=(left+right+1)/2;
        if(!panduan(middle))
        right=middle-1;
        else
        left=middle+1;
    }
    cout<<right<<endl;
    return 0;
}
