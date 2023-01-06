#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
int main(){
    LL n,*a,max,k=-1,z;
    cin>>n;
    a=new LL [n];
    for(LL i=0;i<n;i++)
        cin>>a[i];
    cin>>z;
    for(LL i=0;i<n;i++)
        if(a[i]==z){
            k=114514;
            cout<<i+1;
            break;
        }
    if(k==-1)   
        cout<<k;
    
    
}
