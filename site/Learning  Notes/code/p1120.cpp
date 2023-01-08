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
LL n;
LL a[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    LL tot=0;
    for(LL i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>50)
        i--,n--;
        else
        tot+=a[i];
    }


}
