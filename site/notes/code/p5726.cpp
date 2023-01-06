#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
int main(){
    LL n,x=0,y=0;
    cin>>n;
    LD answer=0;
    unsigned short *a=new unsigned short [n];
    unsigned short max,min;
    for(LL i=0;i<n;i++){
        cin>>a[i];
        answer+=a[i];}
    for(LL i=1;i<n;i++){
        if(a[x]<a[i])
            x=i;
        if(a[y]>a[i])
            y=i;}
    answer=answer-(a[x]+a[y]);
    answer/=n-2;
    printf("%.2Lf",answer);
}
