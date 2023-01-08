#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 1145140
string jia(string number1,string number2){
    unsigned short *ON_one,*ON_two;  
    long long i;                 
    while(number1[0]=='0')                 //删除多余前导0
    number1.erase(0,1);
    while(number2[0]=='0')                 //删除多余前导0
    number2.erase(0,1);
    if(number1==""&&number2=="")           //加数为0
    return "0";
    if(number2.size()>number1.size())
    swap(number2,number1);                 //交换位数多的加数到前面
    while(number1.size()!=number2.size())  //位数不相等，添加前导0
    number2='0'+number2;
    ON_one=new unsigned short [number1.size()];
    ON_two=new unsigned short [number2.size()];     //创建动态数组
    for(i=0;i<(long long)number1.size();i++)//导入加数1
            ON_one[i]=number1[i]-48;
    for(long long j=0;j<(long long)number2.size();j++)//导入加数2
        ON_two[j]=number2[j]-48;   
                                                 //需添加删除字符串                       
    bool answer0=false;                    //在最高位进位特别注意溢出情况!                     
    string answer="";                      //创建最后输出字符串
    for(long long j=i-1;0<=j;j--){         //开始相加
        ON_one[j]+=ON_two[j];
        if(ON_one[j]>=10){                 //进位
            ON_one[j]-=10;
            if(j>0)
                ON_one[j-1]++;
            else
                answer0=true;}}            //在最高位进位
    delete [] ON_two;                      //清除无用数组
    for(long long j=0;j<i;j++)
        answer+=ON_one[j]+48;
    if(answer0==true)
        answer='1'+answer;
    while(answer[0]=='0')                  //删除多余前导0
    answer.erase(0,1);
    return answer;}
string jian(string number1,string number2){
    short *ON_one,*ON_two;  
    long long i;                 
    while(number1[0]=='0')                 //删除多余前导0
    number1.erase(0,1);
    while(number2[0]=='0')                 //删除多余前导0
    number2.erase(0,1);
    if(number1.size()<number2.size()){     //被减数大于减数
        cout<<'-';swap(number2,number1);}
    while(number1.size()>number2.size())   //位数不相等，添加前导0
    number2='0'+number2;
    for(long long i=number1.size();i>=0;i--)
        if(number1[i]<number2[i]){
            swap(number1,number2);
            cout<<'-';
            break;}
    ON_one=new short [number1.size()];
    ON_two=new short [number2.size()];     //创建动态数组
    for(i=0;i<(long long)number1.size();i++)          //导入被减数
            ON_one[i]=number1[i]-48;
    for(long long j=0;j<(long long)number2.size();j++)//导入减数
        ON_two[j]=number2[j]-48;   
                                                 //需添加删除字符串                 
    string answer="";                      //创建最后输出字符串
    for(long long j=i-1;0<=j;j--){         //开始相减
        ON_one[j]-=ON_two[j];
        if(ON_one[j]<0){                 //退位
            ON_one[j]+=10;
            ON_one[j-1]--;}}
    delete [] ON_two;                      //清除无用数组
    for(long long j=0;j<i;j++)
        answer+=ON_one[j]+48;
    while(answer[0]=='0')                  //删除多余前导0
    answer.erase(0,1);
    if(answer=="")
        answer="0";
    return answer;}
string operator+(string number1,string number2){
    return jia(number1,number2);}
string operator-(string number1,string number2){
    return jian(number1,number2);}
string operator+(string number1,int number2){
    return jia(number1,to_string(number2));}
string operator-(string number1,int number2){
    return jian(number1,to_string(number2));}
map<string,string> f;
string fib(string x){
    if(f[x]!="")return f[x];
    if(x=="0"||x=="1") return f[x]=x;
    return f[x]=fib(x-1)+fib(x-2);}
LL s(string x){
    LL sum=0;
    for(int i=0;i<x.size();i++)
        sum+=x[i]-'0',sum%=9;
    return sum;}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n;
    for(LL i=0;i<n;i++){
        LL t,tot=0;
        cin>>t;
        for(LL i=1;i<=t;i++){
            tot+=s(fib(to_string(i))),tot%=9;}
        printf("%lld\n",tot);}
    return 0;
    

}
