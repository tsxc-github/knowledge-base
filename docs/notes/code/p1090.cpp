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
    priority_queue<LL,vector<LL>,greater<LL>>q;
    for(LL i=0;i<n;i++){
        LL temp;
        cin>>temp;
        q.push(temp);
    }
    LL ans=0;
    while(q.size()!=1){
        LL t1=q.top();
        q.pop();
        LL t2=q.top();
        q.pop();
        ans+=t1+t2;
        q.push(t1+t2);
    }
    cout<<ans;
    return 0;
}
