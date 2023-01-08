#include<iostream>
#include<iomanip>
using namespace std;
int a[6];
int main(){
    cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
    a[2]+=a[1]/3; a[5]+=a[1]/3; a[1]=a[1]/3;
    a[3]+=a[2]/3; a[1]+=a[2]/3; a[2]=a[2]/3;
    a[2]+=a[3]/3; a[4]+=a[3]/3; a[3]=a[3]/3;
    a[3]+=a[4]/3; a[5]+=a[4]/3; a[4]=a[4]/3;
    a[4]+=a[5]/3; a[1]+=a[5]/3; a[5]=a[5]/3;
    printf("%5d%5d%5d%5d%5d",a[1],a[2],a[3],a[4],a[5]);

    
}