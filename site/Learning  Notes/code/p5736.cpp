#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<cctype>
#define LL long long
#define LD long double
using namespace std;
bool zhishu(LL a){
    if(a==1)
    return false;
    bool temp=true;
    for(LL i=2;i*i<=a;i++){
        if(a%i==0){
            temp=false;
            break;}}
        if(temp==true)
            return true;
        else
            return false;
}
int main(){
    LL n,x;
    cin>>n;
    for(LL i=1;i<=n;i++){
        cin>>x;
        if(zhishu(x)==true)
        cout<<x<<' ';
    }

}
