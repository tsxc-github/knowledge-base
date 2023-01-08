#include<iostream>
#include<cstdio>
#include<iomanip>
#include<math.h>
#include<cstring>
#include<memory>
using namespace std;
    
int main(){
    long long a,i,x[105]={};
    for(i=0;true;i++){
        cin>>x[i];
        if(x[i]==0)
        break;
    }
    for(i-=1;i>=0;i--)
        cout<<x[i]<<' ';
}
