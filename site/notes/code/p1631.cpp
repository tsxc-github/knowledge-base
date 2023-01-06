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
    LL a[n];
    LL b[n];
    priority_queue<LL>q;
    for(LL i=0;i<n;i++){
        cin>>a[i];
    }
    for(LL i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b,b+n);
    for(LL i=0;i<n;i++)
    for(LL j=0;j<n;j++){
        // if(clock()>CLOCKS_PER_SEC*0.95) 
        // break;
        if(q.size()<n||a[i]+b[j]<q.top()){
            q.push(a[i]+b[j]);
            if(q.size()>n)
                q.pop();}
        else
        break;
    }
    n=q.size();
    for(LL i=0;i<n;i++){
        a[i]=q.top();
        q.pop();
    }
    for(LL i=n-1;i>=0;i--)
    printf("%lld ",a[i]);
    return 0;
}
