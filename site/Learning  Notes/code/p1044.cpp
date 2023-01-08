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
stack<bool> s;
LL abc;
void dfs(LL n){
    if(n==0)return;
    if(s.size()){
        abc++;
        s.pop();
        dfs(n-1);
        s.push(true);}
    s.push(false);
    dfs(n-1);
    s.pop();
    abc++;
}
int main(){
    LL n,x;
    cin>>n;
    dfs(n);
    cout<<abc;
    return 0;
}
