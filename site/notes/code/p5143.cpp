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
struct p5143
{
    double x,y,z;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    p5143 a[n];
    for(LL i=0;i<n;i++){
        cin>>a[i].x>>a[i].y>>a[i].z;
    }
    sort(a,a+n,[](p5143 a,p5143 b){
        return a.z<b.z;
    });
    double ans=0;
    for(LL i=1;i<n;i++){
        ans+=sqrt((a[i-1].x-a[i].x)*(a[i-1].x-a[i].x)+(a[i-1].y-a[i].y)*(a[i-1].y-a[i].y)+(a[i-1].z-a[i].z)*(a[i-1].z-a[i].z));
    }
    printf("%.3lf",ans);
    return 0;
}
