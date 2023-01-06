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
#include<list>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#ifndef ONLINE_JUDGE
#pragma optimize("", off) //关闭优化
#endif

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n;
    map<LL,list<LL>::iterator>mp;
    list<LL>l;
    l.insert(l.begin(),1);
    mp[1]=l.begin();
    for(LL i=2;i<=n;i++){
        LL k,p;
        cin>>k>>p;
        if(p==0){
            mp[i]=l.insert(mp[k],i);}
        if(p==1){
            list<LL>::iterator d=mp[k];
            mp[i]=l.insert(++d,i);}
        }
    cin>>m;
    for(LL i=0;i<m;i++){
        LL k;
        cin>>k;
        if(mp[k]!=l.end())
            l.erase(mp[k]),mp[k]=l.end();
    }
    list<LL>::iterator d=l.begin();
    cout.tie(0);
    while(d!=l.end()){
        printf("%lld ",*d);
        d++;}
    return 0;
}
