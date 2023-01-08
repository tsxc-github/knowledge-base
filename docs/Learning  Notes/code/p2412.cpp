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
void strlwr(string &a){
    for(LL i=0;i<a.size();i++){
        a[i]=tolower(a[i]);
    }
}
struct p2412
{
    LL num;
    string word,wordsmall;
}a[114514];
bool cmp(p2412 a,p2412 b){
    return a.wordsmall>b.wordsmall;
}
int main(){
    LL n,m,x,y;
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(LL k=0;k<n;k++){
        cin>>a[k].word;
        a[k].wordsmall=a[k].word;
        strlwr(a[k].wordsmall);
        a[k].num=k;}
    sort(a,a+n,cmp);
    for(LL i=0;i<m;i++){
        cin>>x>>y;
        x--;y--;
        for(LL j=0;j<n;j++)
        if(a[j].num>=x&&a[j].num<=y){
            printf("%s\n",a[j].word.c_str());
            break;}
        
    }
    return 0;
}
