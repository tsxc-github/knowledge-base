#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;
bool pd_h(int x)
{
    int y=x,num=0;//int y=x,防止x被改变
    while (y!=0)
    {
        num=num*10+y%10;//上一次数字的记录进位再加上下一位数
        y/=10;
    } 
    if (num==x) return 1;
    else return 0;
}
bool Prime(int x){
    int jl=0;
    int w=0;
    int k=x;//防止x的值改变 
    while(k)
    {
        w++;
        k/=10;
    }
    if(w%2==0||x%2==0) return 0;
    for(int k=2;k<=sqrt(x);k++)
        if(x%k==0) jl=1;
    if(jl==0) return 1;
    else return 0;
}
int main(){
    FILE *out;
    out=freopen("p1217表.txt","w",stdout);
    for(LL i=1;i<=1000000001;i++)
    if(pd_h(i)&&Prime(i))
    printf("%ld,",i);
    fclose(out);
    return 0;
}

