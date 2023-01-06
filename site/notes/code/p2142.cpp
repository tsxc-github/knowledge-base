#include<math.h>
#include<iostream>
#include<cctype>
#include<cstdio>
#include<string>
using namespace std;
string jian(){
    string number1,number2;
    cin>>number1>>number2;
    bool temp=true;
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
    for(long long i=0;i<number1.size();i--){
        if(number1[i]>number2[i])
            break;
        if(number1[i]<number2[i]){
            swap(number1,number2);
            cout<<'-';
            break;}}
    ON_one=new short [number1.size()];
    ON_two=new short [number2.size()];     //创建动态数组
    for(i=0;i<number1.size();i++)          //导入被减数
            ON_one[i]=number1[i]-48;
    for(long long j=0;j<number2.size();j++)//导入减数
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
    return answer;
}
int main(){
    cout<<jian();
}