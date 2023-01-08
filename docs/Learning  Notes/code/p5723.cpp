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
    LL l,x=2,y=1,a=3;
    bool temp;
    cin>>l;
    if(l==2){
        cout<<2<<endl<<1;
        return 0;}
    if(l<2){
        cout<<0;
        return 0;
    }
    cout<<2<<endl;
    while(x<=l){
        temp=true;LL i=3;
        for(;i*i<=a;i+=2){
            if(a%i==0){
                temp=false;
                break;
            }}
        if(temp==true){
            x+=a;
            y++;
            if(x>l){
                cout<<y-1;
                return 0;
            }
            else
            printf("%ld\n",a);
        }
        a+=2;
    }
    
}
