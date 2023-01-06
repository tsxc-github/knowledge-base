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
    long long a=0,b=0,c=0;
    cin>>a;
    
    cout<<jx(a,1);
    
    
}
