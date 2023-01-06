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
#include<set>
typedef long long LL;
#define LD long double
#define US unsigned short
using namespace std;
struct yee{
    LL num=0,cishu=0,i=-1;
};
bool operator<(const yee &a,const yee &b){
    if(a.cishu!=b.cishu)
    return a.cishu<b.cishu;
    return a.i<b.i;
}
map<LL,yee> z;
set<yee>s;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m,tot=0;
    LL ans=0;
    cin>>n>>m;
    for(LL i=0;i<m;i++){
        LL mingling;
        cin>>mingling;
        if(s.count(z[mingling])){
            ans++;
            s.erase(s.find(z[mingling]));
            z[mingling].cishu++;
            s.insert(z[mingling]);}
        else{
            z[mingling].cishu++;
            if(tot==n){
            s.erase(s.begin());
            tot--;}
            if(z[mingling].i==-1){
            z[mingling].num=mingling;
            z[mingling].i=i;}
            s.insert(z[mingling]);
            tot++;}
        }
    cout<<ans<<endl;
    return 0;
    }
