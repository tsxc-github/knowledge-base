#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
bool a[1145141919];
int main(){
    LL n,x,y;
    cin>>n;
    memset(a,true,n);
    cin>>x;
    for(LL i=2;i<=n;i++){
        cin>>y;
        a[abs(x-y)]=false;
        x=y;}
    for(LL i=1;i<n;i++)
        if(a[i]==true){
        cout<<"Not jolly";
        return 0;}
    cout<<"Jolly";
    return 0;
}
