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
struct p1223
{
    LL i;
    LL time;
};
bool cmp(p1223 x,p1223 y){
    return x.time<y.time;
}
int main(){
    LL n;
    p1223 x[1234];
    cin>>n;
    for(LL i=0;i<n;i++){
        cin>>x[i].time;
        x[i].i=i+1;}
    sort(x,x+n,cmp);
    LD a=0;
    for(LL i=0;i<n;i++){
        cout<<x[i].i<<' ';
        for(LL j=0;j<i;j++)
        a+=x[j].time;
    }
    cout<<endl;
    printf("%.2Lf",(LD)a/n);
    return 0;
}
