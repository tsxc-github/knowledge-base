#include<math.h>
#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int n; 
int k;
double A,B,a,b;
double a1,b1,c=1.0;
bool *x;
int main()
{
    cin>>n>>k;
    x=new bool[n+1];//申请数组
    for(int i=1;i<=n;i++) {
        if(i%k==0){
            x[i]=true;a+=1;}
        else {
            x[i]=false;b+=1;}}
    for(int i=1;i<=n;i++) {
        if(x[i]==true)A+=i;
        else B+=i;  }
    a1=A/a;
    b1=B/b;
    printf("%.1lf%c%.1lf",a1,' ',b1);
    

        
    


    
}