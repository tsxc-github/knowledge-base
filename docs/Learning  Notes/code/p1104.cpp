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
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
struct student{
    string s;
    LL y,m,d,n;};
student a[MAX];
bool cmp(student a,student b){
    if(a.y!=b.y)
    return a.y<b.y;
    if(a.m!=b.m)
    return a.m<b.m;
    if(a.d!=b.d)
    return a.d<b.d;
    return a.n>b.n;}
bool operator==(student a,student b){
    return a.s==b.s&&a.y==b.y&&a.m==b.m&&a.d==b.d;}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,x;
    cin>>n;
    for(LL i=0;i<n;i++){
        cin>>a[i].s>>a[i].y>>a[i].m>>a[i].d;
        a[i].n=i;}
    sort(a,a+n,cmp);
    for(LL i=0;i<n;i++){
        printf("%s\n",a[i].s.c_str());}
    return 0;
}
