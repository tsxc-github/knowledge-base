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
    string a,b;
    cin>>a>>b;
    LL next[b.size()+1]={};
    for(LL i=1;i<=b.size();i++){
        for(LL j=0;j<i;j++){
            if(b.substr(0,j)==b.substr(i-j,j))
            next[i]=j;
        }
    }
    LL i=0,j=0;
    while(i<a.size()){
        if(j==b.size()){
            printf("%lld\n",i-j+1);
            while(true){
                j=next[j];
                if(a[i]==b[j])
                break;
                if(j==0)
                while(i<a.size()){
                    if(a[i]==b[j])
                    break;
                    i++;
                }
                if(i>=a.size())
                break;
            }
        }
        if(a[i]==b[j]){
            i++,j++;
            continue;
        }
        else{
            while(true){
                j=next[j];
                if(a[i]==b[j])
                break;
                if(j==0)
                while(i<a.size()){
                    if(a[i]==b[j])
                    break;
                    i++;
                }
                if(i>=a.size())
                break;
            }
        }
    }
    if(j==b.size())
    printf("%lld\n",i-j+1);

    for(LL i=1;i<=b.size();i++)
    printf("%lld ",next[i]);
    return 0;

}
