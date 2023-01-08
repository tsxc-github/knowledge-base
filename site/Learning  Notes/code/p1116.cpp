#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
void swap(LL &a,LL &b){
    LL z;
    z=a;
    a=b;
    b=z;
}
int main(){
    LL n,x=0,i,*a,b=0;
    cin>>n;
    a=new LL [n];
    for(i=0;i<n;i++)
        cin>>a[i];
    bool temp=true;
    while(temp==true){
    temp=false;
    for(i=1;i<n;i++){
        if(a[i-1]>a[i]){
            swap(a[i-1],a[i]);
            temp=true;
            b++;}
    }}
    cout<<b;

}
