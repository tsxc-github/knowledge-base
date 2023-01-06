#include<iostream>
#include<cstdio>
#include<iomanip>
#include<math.h>
#include<cstring>
#include<memory>
using namespace std;
    
int main(){
    long long x;
    double a=0;
    for(long long i=1;i<=10;i++){
        cin>>x;
        switch (i)
        {
            case 1:a+=(double)28.9*x;break;
            case 2:a+=(double)32.7*x;break;
            case 3:a+=(double)45.6*x;break;
            case 4:a+=(double)78*x;break;
            case 5:a+=(double)35*x;break;
            case 6:a+=(double)86.2*x;break;
            case 7:a+=(double)27.8*x;break;
            case 8:a+=(double)43*x;break;
            case 9:a+=(double)56*x;break;
            case 10:a+=(double)65*x;break;
            
        }   }
    printf("%.1lf",a);
    }
