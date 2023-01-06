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
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 1000000005
#endif
LL ans[MAX];
LL find(LL x){
    if(ans[x]==x)
    return x;
    else
    return ans[x]=find(ans[x]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL t;
    cin>>t;
    for(LL k=0;k<t;k++){
        LL n;
        cin>>n;
        queue<LL> a;
        queue<LL> b;
        for(LL i=1;i<=n;i++)
        ans[i]=i;
        for(LL i=0;i<n;i++){
            LL temp,x,y;
            cin>>x>>y>>temp;
            if(temp==1){
                ans[find(x)]=find(y);}
            else
            a.push(x);
            b.push(y);}
        while(!a.empty()){
            LL x=a.front();
            LL y=b.front();
            a.pop();
            b.pop();
            if(find(x)==find(y)){
            printf("NO\n");
            a.push(114514);
            break;}}
        if(a.empty())
        printf("YES\n");
    }
    return 0;

}
