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
LL a[MAX];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m,temp,maxx=-1145141919810,k;
    cin>>m>>n;
    for(LL i=1;i<=n;i++){
        cin>>temp;
        a[temp]++;
        }
    for(int i=0;i<m;++i) {
        if(a[i]>=maxx) maxx=a[i],k=i;
    }
    cout<<k;
    return 0;
}
