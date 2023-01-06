#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main(){
    long long a,list[114514]={},i=1;
    cin>>a;
    list[0]=a;
    while (a!=1){
        if(a%2==1)
        a=a*3+1;
        else
        a=a/2;
        list[i++]=a;}
    
    while(i>0){
        cout<<list[--i]<<' ';
    }
    

}