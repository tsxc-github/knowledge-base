#include<math.h>
#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int n; 
int x=114514;
int *a;
int main()
{
    cin>>n;
    a=new int[n];//申请数组
    for(int i=0;i<n;i++) cin>>a[i];//输入
    for(int i=0;i<n;i++) if(x>a[i])x=a[i];
    cout<<x;
    

        
    


    
}