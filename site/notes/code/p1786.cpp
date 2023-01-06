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
struct bangpai
{
    string name;
    LL zhiwei;
    LL banggong;
    LL dengji;
}a[200],x[3];
bool cmp1(bangpai a,bangpai b){
    return a.banggong>b.banggong;}
bool cmp2(bangpai a,bangpai b){
    if(a.zhiwei!=b.zhiwei)
    return a.zhiwei<b.zhiwei;
    return a.dengji>b.dengji;}
string s[]={"BangZhu","FuBangZhu","HuFa","ZhangLao","TangZhu","JingYing","BangZhong"};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,tot=0;
    cin>>n;
    for(LL i=0;i<n;i++){
        string temp;
        cin>>a[i].name>>temp>>a[i].banggong>>a[i].dengji;
        if(temp=="BangZhu"){
            a[i].zhiwei=0;
            x[tot++]=a[i];
            a[i].banggong=0;}
        else if(temp=="FuBangZhu"){
            a[i].zhiwei=1;
            x[tot++]=a[i];
            a[i].banggong=0;}
        else if(temp=="HuFa")
            a[i].zhiwei=2;
        else if(temp=="ZhangLao")
            a[i].zhiwei=3;
        else if(temp=="TangZhu")
            a[i].zhiwei=4;
        else if(temp=="JingYing")
            a[i].zhiwei=5;
        else if(temp=="BangZhong")
            a[i].zhiwei=6;}
    stable_sort(a+3,a+n,cmp1);
    for(LL i=2;i<n;i++){
        for(LL j=0;j<2&&i<n;i++,j++){
            a[j].zhiwei=3;}
        for(LL j=0;j<4&&i<n;i++,j++){
            a[j].zhiwei=4;}
        for(LL j=0;j<7&&i<n;i++,j++){
            a[j].zhiwei=5;}
        for(LL j=0;j<25&&i<n;i++,j++){
            a[j].zhiwei=6;}
        a[i].zhiwei=7;}
    stable_sort(a+3,a+n,cmp2);
    stable_sort(x,x+tot,cmp2);
    cout<<endl;
    for(LL i=0;i<tot;i++){
        cout<<x[i].name<<" "<<s[x[i].zhiwei]<<" "<<x[i].dengji<<endl;}
    for(LL i=2;i<n;i++){
        cout<<a[i].name<<" "<<s[a[i].zhiwei]<<" "<<a[i].dengji<<endl;}
    return 0;
}
