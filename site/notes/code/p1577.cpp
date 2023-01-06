#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#include<queue>
#include<vector>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 114514
LL n,m;
LL a[MAX];
bool  panduan(LL h){
    LL tot=0;
    LL temp[MAX];
    for(LL i=0;i<n;i++){
        if(a[i]>=h)
        tot++;
        temp[i]=a[i]-h;
        if(tot>=m)
        return true;}
    bool flag=true;
    while(flag){
        flag=false;
        for(LL i=0;i<n;i++){
            if(temp[i]>=h)
            tot++,flag=true;
            temp[i]-=h;
            if(tot>=m)
            return true;}}
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(LL i=0;i<n;i++){
        LD temp;
        cin>>temp;
        a[i]=temp*100;}
    LL l=0,r=1e10;
    while(r>l){
        LL mid=(l+r+1)/2;
        if(panduan(mid))
        l=mid;
        else
        r=mid-1;}
    printf("%.2Lf\n",(LD)r/100);
    return 0;
}