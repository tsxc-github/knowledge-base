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
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
struct fenshu{
    LL fenzi;
    LL fenmu;
    fenshu(){
        fenzi=0;
        fenmu=1;}
    void refresh(){
        if(fenzi==fenmu){
            fenzi=1;
            fenmu=1;
            return;
        }
        LL gcd=__gcd(fenzi,fenmu);
        fenzi/=gcd;
        fenmu/=gcd;
        if(fenmu<0){
            fenzi=-fenzi;
            fenmu=-fenmu;
    }}};
fenshu operator+(fenshu a,fenshu b){
    fenshu c;
    c.fenzi=a.fenzi*b.fenmu+b.fenzi*a.fenmu;
    c.fenmu=a.fenmu*b.fenmu;
    c.refresh();
    return c;}
fenshu operator-(fenshu a,fenshu b){
    fenshu c;
    c.fenzi=a.fenzi*b.fenmu-b.fenzi*a.fenmu;
    c.fenmu=a.fenmu*b.fenmu;
    c.refresh();
    return c;}
fenshu operator*(fenshu a,fenshu b){
    fenshu c;
    c.fenzi=a.fenzi*b.fenzi;
    c.fenmu=a.fenmu*b.fenmu;
    c.refresh();
    return c;}
fenshu to_fenshu(string s){
    fenshu c;
    sscanf(s.c_str(),"%lld/%lld",&c.fenzi,&c.fenmu);
    c.refresh();
    return c;}
string to_string(fenshu a){
    a.refresh();
    if(a.fenzi%a.fenmu==0)
    return to_string(a.fenzi/a.fenmu);
    return to_string(a.fenzi)+"/"+to_string(a.fenmu);}
int main(){
    deque<fenshu> d;
    deque<char> c;
    fenshu temp;
    char x=getchar();
    if(x=='-'){
        scanf("%lld/%lld",&temp.fenzi,&temp.fenmu);
        temp.fenzi=-temp.fenzi;
        d.push_back(temp);}
    else{
        LL a=x-'0';
        while((x=getchar())>='0'&&x<='9')
            a=a*10+x-'0';
        scanf("%lld",&temp.fenmu);
        temp.fenzi=a;
        d.push_back(temp);}
    string s[100];
    LL pos=0;
    while((x=getchar())!=EOF){
        if(x=='+'||x=='-'){
            c.push_back(x);
            pos++;}
        else
            s[pos]+=x;}
    for(LL i=1;i<=pos;i++){
        d.push_back(to_fenshu(s[i]));}
    while(!c.empty()){
        if(c.front()=='+'){
            temp=d.front();
            d.pop_front();
            fenshu temp2=d.front();
            d.pop_front();
            temp=temp2+temp;
            d.push_front(temp);}
        if(c.front()=='-'){
            temp=d.front();
            d.pop_front();
            fenshu temp2=d.front();
            d.pop_front();
            temp=temp-temp2;
            d.push_front(temp);}
        c.pop_front();}
    d.front().refresh();
    cout<<to_string(d.front());
    return 0;
}
