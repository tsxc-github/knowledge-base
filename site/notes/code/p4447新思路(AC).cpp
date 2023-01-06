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
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
LL n;
LL a[MAX];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(LL i=0;i<n;i++){
        cin>>a[i];}
    vector<vector<LL>>v;
    sort(a,a+n);
    for(LL i=0;i<n;i++){
        bool s=true;
        while(s){
            s=false;
        for(LL i=1;i<v.size();i++){
            if(v[i-1].size()>v[i].size())
            swap(v[i-1],v[i]),s=true;}}
        bool flag=false;
        for(LL j=0;j<v.size();j++){
            if(v[j].back()+1==a[i]){
            v[j].push_back(a[i]),flag=true;
            break;}
        }
        if(!flag){
            vector<LL>temp;
            temp.clear();
            temp.push_back(a[i]);
            v.push_back(temp);}
    }
    LL minn=1145141919810;
    for(LL i=0;i<v.size();i++){
        minn=min((LL)v[i].size(),minn);}
    cout<<minn;
    return 0;
}
/*
    in:
6
2 3 3 4 4 5
    out:
3
*/