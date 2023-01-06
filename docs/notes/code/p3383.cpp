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
int main(){
    LL n,q;
    std::ios::sync_with_stdio(0);
    cin>>n>>q;
    bool *list=new bool [n+1];
    memset(list,0,sizeof(list)*n);
    for(LL i=2;i<=n;i++){
        for(LL j=1;j*i<=n;j++)
        list[j*i]=true;
    }
    LL k,temp;
    for(LL i=1;i<=q;i++){
        cin>>k;
        temp=0;
        LL j;
        for(j=2;temp<=k;j++)
        if(list[j]==false)
        temp++;
        printf("%ld",j);
        
    }

}