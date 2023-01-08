

#include<thread>
#include<time.h>
#include<iostream>
#include<cstdio>
#include<iomanip>
#include<math.h>
using namespace std;


long long zhishu(long long b){
    long long a=1,c=0,d=0,*list;
    list=new long long[b/2]();//申请数组并初始化
    list[0]=2;
    bool temp;
    while (a<b){
        a+=2;temp=false;c=0;

        while(c<=sqrt(d)){
            if(a%list[c]) {
                temp=true; c+=1;} 
            else {
                temp=false;break;}}

        if(temp==true) {
            list[++d]=a;}}
    
    return d;
        }
int main(){     
    double start,end;                                 
    long long a;
    cin>>a;
    start=clock();
    cout<<zhishu(a);


    end=clock();
    end=end-start;
    cout<<endl<<"用时："<<end/CLOCKS_PER_SEC<<"秒";
}
