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
bool panduan(LL h){
    LL minn=1145141919810;
    LL tot=0,temp=1145141919810;
    for(LL i=0;i<n;i++){
        if(temp==1145141919810)
        temp=a[i],tot++;
        else
        if(a[i]==temp+1)
        temp=a[i],tot++;
        else
        minn=min(tot,minn),
        temp=a[i],tot=1;
        if(minn<h)
        return false;
    }
    if(tot<h)
        return false;
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>n;
    for(LL i=0;i<n;i++){
        cin>>a[i];}
    sort(a,a+n);
    LL left=0,right=MAX;
    while(right>left){
        LL middle=(right+left+1)/2;
        if(!panduan(middle))
        right=middle-1;
        else
        left=middle;
    }
    printf("%lld",right);
    return 0;
}
/*
    in:
6
2 3 3 4 4 5
    out:
3
*/