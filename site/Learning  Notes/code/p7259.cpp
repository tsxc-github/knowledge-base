#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<cmath>
#include<cctype>
#include<map>
#include<queue>
#include<vector>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
struct num{
    LL n;
    LL data;
};
map<LL,LL> v;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    num a[n];
    LL before=-1;
    LL tot=0;
    for(LL i=0;i<n;i++){
        cin>>a[i].data;
        if(before!=a[i].data)
        tot++;
        before=a[i].data;
        v[a[i].data]++;
    }
    sort(a,a+n,[](num a,num b){
        if(v[a.data]!=v[b.data])
            return v[a.data]>v[b.data];
        return a.n<b.n;
    });
    for(LL i=0;i<n;i++){
        printf("%lld ",a[i].data);
    }
    return 0;
}
