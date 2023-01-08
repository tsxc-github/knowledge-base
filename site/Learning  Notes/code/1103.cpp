#include<iostream>
#include<cstdio>
#include<iomanip>
#include<math.h>
using namespace std;
    
int main(){
    long long n,m,x=0;
    long long a[114514]={};
    long long i;
    for(long long i=0;i<10;i++)scanf("%ld",&a[i]);
    cin>>m;m+=30;
    for(long long i=0;i<10;i++)
    if(a[i]<=m)x++;
    cout<<x;
}
