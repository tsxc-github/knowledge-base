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
map<string,string> a;
string find(string x){
    if(a[x]==x)return x;
    if(a[x]=="")return x;
    return a[x]=find(a[x]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    char x=0;
    string name,s;
    while(cin>>x,x!='$'){
        if(x=='#'){
            cin>>s;
            if(a[s].size()==0)
            a[s]=s;}else
        if(x=='+'){
            cin>>name;
            a[find(name)]=find(s);}else
        if(x=='?'){
            cin>>name;
            printf("%s %s\n",name.c_str(),find(name).c_str());}
    }
    return 0;
}