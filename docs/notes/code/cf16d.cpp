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
    LL n;
    cin>>n;
    LL h,m;
    time_t last=-1;
    LL ans=0,tot=1;
    getchar();
    for(LL i=0;i<n;i++){
        string now;
        scanf("[%lld:%lld ",&h,&m);
        getline(cin,now);
        h%=12;
        if(now.find("p.m.")!=string::npos)
        h+=12;
        time_t t=h*3600+m*60;
        if(last==-1){
            last=t;
            ans++;
        }
        else{
            if(t-last<0)
            ans++,tot=1;
            if(t-last==0){
                tot++;}
            if(tot==10)ans++,tot=0;
            last=t;
        }

    }
    
    cout<<ans;
    return 0;
}
