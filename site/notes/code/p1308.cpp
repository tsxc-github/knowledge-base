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
//大写转小写
string toLower(string s){
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    return s;
}
int main(){
    ios::sync_with_stdio(false);
    string ask,s;
    getline(cin,ask);
    getline(cin,s);
    ask=' '+toLower(ask)+' ';
    s=' '+toLower(s)+' ';
    LL pos=0,temp=-1;
    LL ans=0;
    while((pos=s.find(ask,pos))!=string::npos){
        if(temp==-1)
        temp=pos;
        pos+=ask.size()-1;
        ans++;}
    if(ans==0)
    cout<<"-1";
    else
    cout<<ans<<' '<<temp;
    return 0;
}
