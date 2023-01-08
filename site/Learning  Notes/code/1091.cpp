#include<iostream>
#include<cstdio>
#include<cctype>

using namespace std;
long long jx(long long a ,long long b){//a为a!,b为1
    if(a!=0){
        b=b*a--;
        b=jx(a,b);
        return b;}
    else {
        return b;}}
int main(){
    long long n,x=0,c=0;
    cin>>n;
    for(long long i=n;i>0;i--)
    x+=jx(i,1);
    cout<<x;
    
}
