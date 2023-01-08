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
string asghfdkishviuasdhu(string a,string answer="",LL temp=0){
    if(a.size()==0)
    return answer;
    answer+=' ';
    answer[temp]=a[a.size()-1];
    a.erase(a.size()-1,1);
    return asghfdkishviuasdhu(a,answer,++temp);
}
int main(){
    string dkasfhfui;
    cin>>dkasfhfui;
    dkasfhfui.erase(dkasfhfui.size()-1,1);
    cout<<asghfdkishviuasdhu(dkasfhfui);
    return 0;
}
