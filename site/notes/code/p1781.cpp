#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
bool bj(string &a,string &b){
    if(a.size()>b.size())
    return true;
    if(a.size()<b.size())
    return false;
    for(LL i=0;i<a.size();i++){
        if(a[i]>b[i])
        return true;
        if(a[i]<b[i])
        return false;
    }
    return false;
}
int main(){
    LL n;
    cin>>n;
    string max;
    cin>>max;
    LL p=1;
    string a;
    for(LL i=2;i<=n;i++){
        cin>>a;
        if(bj(a,max)){
            max=a;
            p=i;
        }
    }
    to_string
    cout<<p<<endl<<max;
}
