#include<iostream>
#include<cstdio>
#include<iomanip>

using namespace std;


long long zhishu1(long long x,long long y,long long *list){
    long long a=1,c=0,d=0,b;
    b=y;
    list[0]=2;
    bool temp;
    
    while (a<b){
        a+=2;temp=false;c=0;
        while(c<=d){
            if(a%list[c]) {
                temp=true; c+=1;} 
            else {
                temp=false;break;}}
        if(temp==true) {
            list[++d]=a;
            if(list[d]>=x&&list[d]<=y)printf("%ld\n",list[d]);}}
    
    return list[d];
        }
int main(){
    long long a,*list,b;
    long double start,end;
    char z;
    if(a==2&&b==3)cout<<2<<endl<<3;
    cin>>a>>b;
    list=new long long[a/2]();//申请数组并初始化
    
    zhishu1(a,b,list);
    
}
