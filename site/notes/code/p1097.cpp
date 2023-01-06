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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    map<LL,LL>m;
    vector<LL>v;
    for(LL i=0;i<n;i++){
        LL temp;
        cin>>temp;
        m[temp]++;
        if(m[temp]==1)
        v.push_back(temp);}
    sort(v.begin(),v.end(),greater<LL>());
    while(!v.empty()){
        printf("%lld %lld\n",v.back(),m[v.back()]);
        v.pop_back();
    }
    return 0;
}
