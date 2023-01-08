#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<math.h>
#define LL long long
#define LD long double
using namespace std;

bool zhishu(LL a){
    bool temp=true;
    for(LL i=2;i*i<=a;i++){
        if(a%i==0){
            temp=false;
            break;}}
        if(temp==true)
            return true;
        else
            return false;
}
int main(){
    LL a,b;
    cin>>a>>b;
    LL palindrome;
    bool temp;
    for (LL d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
                palindrome = d1;//(处理回文数...)
                temp=true;
                if(palindrome>=a&&palindrome<=b&&zhishu(palindrome))
                cout<<palindrome<<endl;
    }
    for (LL d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
                palindrome = 10*d1 + d1;//(处理回文数...)
                temp=true;
                if(palindrome>=a&&palindrome<=b&&zhishu(palindrome))
                cout<<palindrome<<endl;
    }
    for (LL d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
        for (LL d2 = 0; d2 <= 9; d2++) {
                palindrome = 100*d1 + 10*d2 + d1;//(处理回文数...)
                temp=true;
                if(palindrome>=a&&palindrome<=b&&zhishu(palindrome))
                cout<<palindrome<<endl;
        }
    }
    for (LL d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
        for (LL d2 = 0; d2 <= 9; d2++) {
                palindrome = 1000*d1 + 100*d2 + 10*d2 + d1;//(处理回文数...)
                temp=true;
                if(palindrome>=a&&palindrome<=b&&zhishu(palindrome))
                cout<<palindrome<<endl;
        }
    }
    for (LL d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
        for (LL d2 = 0; d2 <= 9; d2++) {
            for (LL d3 = 0; d3 <= 9; d3++) {
                palindrome = 10000*d1 + 1000*d2 +100*d3 + 10*d2 + d1;//(处理回文数...)
                temp=true;
                if(palindrome>=a&&palindrome<=b&&zhishu(palindrome))
                cout<<palindrome<<endl;
            }
        }
    }
    
}


