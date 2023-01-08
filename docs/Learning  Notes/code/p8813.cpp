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
    LL a,b;
    cin>>a>>b;
    LL ans=1;
    while(b--){
        ans*=a;
        if(ans>1e9){
            ans=-1;
            break;
        }
    }
    cout<<ans;
    return 0;
    
}
