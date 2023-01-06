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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,x;
    LL starth,startm,starts,endh,endm,ends;
    cin>>starth;
    getchar();
    cin>>startm;
    getchar();
    cin>>starts;
    getchar();
    cin>>endh;
    getchar();
    cin>>endm;
    getchar();
    cin>>ends;
    cin>>x;
    time_t start=starth*3600+startm*60+starts;
    time_t end=endh*3600+endm*60+ends;
    printf("%lld",(end-start)*x);
    exit(0);
}
