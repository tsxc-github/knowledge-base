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
LL z;
LL a[114514]={};
bool dfs(LL n,string before="",LL x=0){
    char s[10]={};
    bool temp=false;
    for(LL i=1;i<=n;i++){
        if(i<before[before.size()-2]-'0')continue;
        sprintf(s,"%lld+",i);
        if(!dfs(n-i,before+s,x+i)&&x+i==z&&before.size()!=0){
            printf("%s%lld\n",before.c_str(),i);
            return temp;}
        temp=true;}
    return temp;
}
int main(){
    ios::sync_with_stdio(false);
    LL n,x;
    cin>>n;
    z=n;
    dfs(n);
    return 0;
}
