#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
using namespace std;
string jia(string number1,string number2){
    bool temp=true;
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
    for(i=0;i<number1.size();i++)//导入加数1
            ON_one[i]=number1[i]-48;
    for(long long j=0;j<number2.size();j++)//导入加数2
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
        answer+='1';
    while(answer[0]=='0')                  //删除多余前导0
    answer.erase(0,1);
    return answer;
}
string cheng(string number1,string number2){
    bool temp=true;
    unsigned short *ON_one,*ON_two;  
    long long i;                 
    while(number1[0]=='0')                 //删除多余前导0
    number1.erase(0,1);
    while(number2[0]=='0')                 //删除多余前导0
    number2.erase(0,1);
    if(number1==""||number2=="")           //因数为0
    return "0";
    if(number2.size()>number1.size())
    swap(number2,number1);                 //交换位数多的因数到前面
    while(number1.size()!=number2.size())  //位数不相等，添加前导0
    number2='0'+number2;
    ON_one=new unsigned short [number1.size()];
    ON_two=new unsigned short [number2.size()];     //创建动态数组
    for(i=0;i<number1.size();i++)//导入因数1
            ON_one[i]=number1[i]-48;
    for(long long j=0;j<number2.size();j++)//导入因数2
        ON_two[j]=number2[j]-48;   
                                                 //需添加删除字符串                       
    short answer0;                          //在最高位进位特别注意溢出情况!                     
    string answer="";                      //创建最后输出字符串
    for(long long j=i-1;j>=0;j--){         //因数2
        for(long long k=j;k>=0;k--){       //因数1
            ON_one[k]=ON_two[j]*ON_one[k]+answer0;
            answer0=0;
            if(ON_one[k]>=10){
                answer0=ON_one[k]/10;
                ON_one[k]%=10;
            }
        }
    }
    delete [] ON_two;                      //清除无用数组
    for(long long j=0;j<i;j++)
        answer+=ON_one[j]+48;
    if(answer0==true)
        answer+='1';
    while(answer[0]=='0')                  //删除多余前导0
    answer.erase(0,1);
    return answer;
}
string jx(long long a){//a为a!
    string b=to_string(a);
    for(long long i=a-1;i>0;i--)
        b=cheng(b,to_string(i));
    return b;
}
int main(){
    long long a,b,c;
    string e="0";
    cin>>a;
    for(long long i=1;i<=a;i++)
        e=jia(jx(i),e);
    cout<<e;
}