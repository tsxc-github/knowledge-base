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
struct dat{
    LL start,end;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    dat pr[n];
    for(LL i=0;i<n;i++){
        cin>>pr[i].start>>pr[i].end;}
    sort(pr,pr+n,[](dat a,dat b){
        if(a.start!=b.start)
        return a.start<b.start;
        return a.end<b.end;
    });
    LL tv1=-1,tv2=-1;
    for(LL i=0;i<n;i++){
        if(pr[i].start<=tv1&&pr[i].start<=tv2){
            printf("NO");
            return 0;}
        if(pr[i].start>tv1)
        tv1=pr[i].end;
        else if(pr[i].start>tv2)
        tv2=pr[i].end;
    }
    printf("YES");
    return 0;
}
