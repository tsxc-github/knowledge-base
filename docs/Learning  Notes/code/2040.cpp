#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;


long long zhishu(long long b){
    long long a=1,c=0,d=0,*list;
    cout<<2<<endl;
    list=new long long[b/2]();//申请数组并初始化
    list[0]=2;
    bool temp;
    while (a<b){
        a+=2;temp=false;c=0;
        while(c<=d){
            if(a%list[c]) {temp=true; c+=1;} else {temp=false;break;}}
        if(temp) {list[d+1]=a;d+=1;printf("%ld\n",a);}}
    return list[d];
        }
int main(){
    long long a;
    cin>>a;
    zhishu(a);
}
