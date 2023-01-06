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
    LL n;
    cin>>n;
    LL ans=0;
    LL speed=LLONG_MAX;
    LL signed_speed=LLONG_MAX; 
    bool chao=true;
    for(LL i=0;i<n;i++){
        LL temp;
        cin>>temp;
        switch(temp){
            case 1:{
                cin>>speed;
                if(speed>signed_speed)
                ans++;
                break;}
            case 2:{
                if(!chao)
                ans++;
                break;}
            case 3:{
                cin>>signed_speed;
                if(signed_speed>speed)
                ans++;
                break;}
            case 4:{
                chao=true;
                break;}
            case 5:{
                signed_speed=LLONG_MAX;
                break;}
            case 6:{
                chao=false;
                break;}}
    }
    printf("%lld",ans);
    return 0;
}
