#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#define LL long long
#define LD long double
using namespace std;
int main(){
    stack<LL>zhan;
    string str;
    char chr;
    LL temp=0;
    LL a,b;
    while(cin>>chr){
        if(chr>='0'&&chr<='9')
        temp=temp*10+chr-'0';
        if(chr=='.'){
            zhan.push(temp);
            temp=0;}
        if(chr=='+'){
            b=zhan.top();
            zhan.pop();
            a=zhan.top();
            zhan.pop();
            zhan.push(a+b);}
        if(chr=='-'){
            b=zhan.top();
            zhan.pop();
            a=zhan.top();
            zhan.pop();
            zhan.push(a-b);}
        if(chr=='*'){
            b=zhan.top();
            zhan.pop();
            a=zhan.top();
            zhan.pop();
            zhan.push(a*b);}
        if(chr=='/'){
            b=zhan.top();
            zhan.pop();
            a=zhan.top();
            zhan.pop();
            zhan.push(a/b);}
        if(chr=='@'){
            cout<<zhan.top();
            return 0;
        }
    }
    
    
}
