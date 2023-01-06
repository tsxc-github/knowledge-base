#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#include<queue>
#include<vector>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
string jia(string a,string b){
    /*运算前处理*/
    bool fuhao=false;//是否有符号

    if(a[0]=='-'){//如果有负号
        fuhao=!fuhao;//符号取反
        a[0]='0';//重置为前导0
    }
    a.erase(0,a.find_first_not_of('0'));//去除前导0
    if(b[0]=='-'){//如果有负号
        fuhao=!fuhao;//符号取反
        b[0]='0';//重置为前导0
    }
    b.erase(0,b.find_first_not_of('0'));//去除前导0
    if(a==""&&b=="")//加数为0
    return "0";
    if(b.size()>a.size())//交换位数多的加数到前面
    swap(a,b);
    while(a.size()!=b.size())  //位数不相等，添加前导0
    b='0'+b;
    for(LL i=0;i<a.size();i++){//当做数组使用
        a[i]-='0';
        b[i]-='0';
    }
    bool answer0=false;//在最高位进位特别注意溢出情况!
    /*处理结束*/
    /*开始相加*/
    for(LL i=a.size()-1;i>=0;i--){
        a[i]+=b[i];
        if(a[i]>=10){//处理进位
            a[i]-=10;
            if(i>0)//处理
                a[i-1]++;
            else
                answer0=true;
        }
    }
    /*相加结束*/
    for(LL i=0;i<a.size();i++)//计算输出字符串
    a[i]+='0';
    a.erase(0,a.find_first_not_of('0'));//去除前导0
    if(answer0==true)
        a='1'+a;//最高位进位
    if(fuhao==true)//如果有负号
    a='-'+a;
    return a;}
string jian(string a,string b){
    /*运算前处理*/
    bool fuhao=false;//是否有符号

    if(a[0]=='-'){//如果有负号
        fuhao=!fuhao;//符号取反
        a[0]='0';//重置为前导0
    }
    a.erase(0,a.find_first_not_of('0'));//去除前导0
    if(b[0]=='-'){//如果有负号
        fuhao=!fuhao;//符号取反
        b[0]='0';//重置为前导0
    }
    b.erase(0,b.find_first_not_of('0'));//去除前导0
    if(a==""&&b=="")//加数为0
    return "0";
    if(b.size()>a.size())//交换位数多的减数到前面
    swap(a,b),fuhao=!fuhao;//符号取反
    while(a.size()!=b.size())  //位数不相等，添加前导0
    b='0'+b;
    if(b>a)//如果减数大于被减数交换减数和被减数,符号取反
    swap(a,b),fuhao=!fuhao;
    for(LL i=0;i<a.size();i++){//当做数组使用
        a[i]-='0';
        b[i]-='0';
    }
    /*处理结束*/
    /*开始相减*/
    for(LL i=a.size()-1;i>=0;i--){
        a[i]-=b[i];
        if(a[i]<0){//处理退位
            a[i]+=10;
            if(i>0)//处理
                a[i-1]--;
            else
                a[i]='0';
        }
    }
    /*相减结束*/
    for(LL i=0;i<a.size();i++)//计算输出字符串
    a[i]+='0';
    a.erase(0,a.find_first_not_of('0'));//去除前导0
    if(fuhao==true)//如果有负号
    a='-'+a;
    return a;}
string chengg(string a,string b){
    /*运算前处理*/
    bool fuhao=false;//是否有符号
    if(a[0]=='-'){//如果有负号
        fuhao=!fuhao;//符号取反
        a[0]='0';//重置为前导0
    }
    a.erase(0,a.find_first_not_of('0'));//去除前导0
    if(b[0]=='-'){//如果有负号
        fuhao=!fuhao;//符号取反
        b[0]='0';//重置为前导0
    }
    b.erase(0,b.find_first_not_of('0'));//去除前导0
    if(a==""||b=="")//乘数为0
    return "0";
    if(b.size()>a.size())//交换位数多的乘数到前面
    swap(a,b);
    for(LL i=0;i<a.size();i++){//当做数组使用
        a[i]-='0';}
    for(LL i=0;i<b.size();i++){//当做数组使用
        b[i]-='0';}
    LL size=a.size()+b.size();//计算位数
    LL temp[size]={};//临时结果数组
    /*处理结束*/
    /*开始相乘*/
    for(LL i=b.size()-1;i>=0;i--){
        for(LL j=a.size()-1;j>=0;j--){
            temp[i+j+1]+=b[i]*a[j];
            temp[i+j]+=temp[i+j+1]/10;
            temp[i+j+1]%=10;
        }
    }
    /*相乘结束*/
    a.clear();//清空输出字符串
    for(LL i=0;i<size;i++)//计算输出字符串
    a+=temp[i]+'0';
    a.erase(0,a.find_first_not_of('0'));//去除前导0
    if(fuhao==true)//如果有负号
    a='-'+a;
    return a;}
struct cheng{
    LL a,b;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    LL a,b;
    cin>>a>>b;
    cheng c[n];
    for(LL i=0;i<n;i++){
        cin>>c[i].a>>c[i].b;
    }
    sort(c,c+n,[](cheng a,cheng b){
        if(a.a!=b.a)
        return a.a<b.a;
        return a.b<b.b;
    });
    string maxmoney="-1145141919810";
    string chengji=to_string(a);
    for(LL i=0;i<n;i++){
        maxmoney=max(maxmoney,chengji/c[i].b);
        chengji*=c[i].a;}
    printf("%lld",maxmoney);
    return 0;
}
