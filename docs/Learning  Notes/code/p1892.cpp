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
LL *a;
LL find(LL x){
    if(a[x]==x)return x;
    else return a[x]=find(a[x]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    a=new LL [n*2+3];
    for(LL i=1;i<n*2+2;i++)
    a[i]=i;
    for(LL i=0;i<m;i++){
        char temp;
        LL x,y;
        cin>>temp>>x>>y;
        if(temp=='F')
        a[find(x)]=find(y);
        else{
            a[find(x+n)]=find(y);
            a[find(y+n)]=find(x);
        }
    }
    LL ans=0;
    for(LL i=1;i<=n;i++)
    if(a[i]==i)ans++;
    cout<<ans<<endl;
    return 0;
}
