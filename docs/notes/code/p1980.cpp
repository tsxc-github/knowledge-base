#include<iostream>
#include<cstdio>
#include<iomanip>

using namespace std;
long long a=0,b,c,d,n,x,y;
bool temp;
    
int main(){
    cin>>n>>x;
    long long j;
    for(long long i=1;i<=n;i++){
        j=i;
        while(j!=0){
            if(j%10==x)
                a++;
            j=j/10;
            }
    }
    cout<<a;
}
