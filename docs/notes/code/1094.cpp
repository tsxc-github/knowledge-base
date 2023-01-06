#include<iostream>
#include<cstdio>
#include<iomanip>

using namespace std;
long long a=0,b,c,d,n,x,y;
bool temp;
    
int main(){
    cin>>n;
    long long j;
    for(long long i=1;i<=n;i++){
        temp=false;
        if(i%7==0){
            temp=true;}
        j=i;
        while(j>=1){
            if(j%10==7){
                temp=true;}
            j=j/10;
            }
        if(temp==false)
        a+=i*i;
    }
    cout<<a;
}
