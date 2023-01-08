#include<math.h>
#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int n; 
double x;
double *a;
int main()
{
    cin>>n;
    a=new double[n];//申请数组
    for(int i=0;i<n;i++) cin>>a[i];//输入
    for(int i=0;i<n;i++) x+=a[i];//和
    x=x/n;
    printf("%.4lf",x);

        
    


    
}