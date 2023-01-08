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
struct xuanshou{
    string man;
    double height;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    xuanshou xuan[n];
    for(LL i=0;i<n;i++){
        cin>>xuan[i].man>>xuan[i].height;
    }
    sort(xuan,xuan+n,[](xuanshou a,xuanshou b){
        if(a.man!=b.man)
        if(a.man=="male")
        return true;
        else return false;
        if(a.man=="male")
        return a.height>
    })
    return 0;
}
