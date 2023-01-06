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
struct node{
    LL num,i;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    map<LL,LL>a;
    for(LL i=1;i<=n;i++){
        LL temp;
        cin>>temp;
        a[temp]=i;}
    vector<node>ans;
    for(LL i=0;i<m;i++){
        LL temp;
        cin>>temp;
        if(a[temp])
        ans.push_back({temp,a[temp]});}
    sort(ans.begin(),ans.end(),[](node a,node b){
        return a.i<b.i;
    });
    for(LL i=0;i<ans.size();i++)
    printf("%lld ",ans[i].num);
    return 0;
}
