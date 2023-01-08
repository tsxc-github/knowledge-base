#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
using namespace std;
long long c,d,n,x,y;
long long a,b;
long long k;
long long int abc(long long a,long long b)
{
    long long int ans=1,base=a;
    while(b>0)
    {
        if(b&1)
            ans=ans*base%k;
        base=base*base%k;
        b>>=1;
    }
    return ans;
    }
int main(){
    cin>>a,b;
    a=abc(a,b)%7;
    switch(a+1){
        case 0: cout<<"Sunday";break;
        case 1: cout<<"Monday";break;
        case 2: cout<<"Tuesday";break;
        case 3: cout<<"Wednesday";break;
        case 4: cout<<"Thursday";break;
        case 5: cout<<"Friday";break;
        case 6: cout<<"Saturday";break;
        
        
    }
}
