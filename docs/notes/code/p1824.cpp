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
#define MAX 100000
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
LL n,m;
LL a[MAX];
bool panduan(LL h){
    LL tot=0,temp=-1145141919810;
    for(LL i=0;i<n;i++){
        if(a[i]-temp>=h)
        tot++,temp=a[i];
        if(tot>=m)
        return true;}
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(LL i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    LL left=0,right=1e10;
    while(right>left){
        LL middle=(left+right+1)/2;
        if(!panduan(middle))
        right=middle-1;
        else
        left=middle;
    }
    cout<<right<<endl;
    return 0;
}
