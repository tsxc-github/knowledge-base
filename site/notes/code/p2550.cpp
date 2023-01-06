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
    LL n,x;
    cin>>n;
    LL a[7];
    map<int,bool>jiang;
    for(LL i=1;i<=7;i++){
        cin>>x;
        jiang[x]=true;
    }
    LL temp;
    for(LL i=1;i<=n;i++){
        temp=0;
        for(LL i=1;i<=7;i++){
        cin>>x;
        if(jiang[x]==true){
            temp++;
        }}
    }
}
