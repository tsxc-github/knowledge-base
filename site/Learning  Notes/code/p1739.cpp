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
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,x;
    char a;
    stack<char> s;
    while((a=getchar())!='@'){
        if(a=='(')
            s.push(a);
        else if(a==')'){
            if(s.empty()){
                cout<<"NO"<<endl;
                return 0;
            }
            else if(s.top()=='('&&a==')')
                s.pop();
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    if(s.empty()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }}
