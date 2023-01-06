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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    map <char,char>m;
    string a,b;
    cin>>a>>b;
    bool f[MAX]={};
    for(LL i=0;i<a.size();i++){
        if(m[a[i]]!=0 && m[a[i]]!=b[i]){
        printf("Failed");
        return 0;}
        m[a[i]]=b[i];
        f[b[i]]=true;
    }
    for(LL i='A';i<='Z';i++){
        if(m[i]==0){
            printf("Failed");
            return 0;
        }
        if(f[i]==false){
            printf("Failed");
            return 0;
        }
    }
    string ans;
    cin>>ans;
    for(LL i=0;i<ans.size();i++){
        printf("%c",m[ans[i]]);
    }
    return 0;
}
