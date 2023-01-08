#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL T;
    cin>>T;
    while(T--){
        LL n,m;
        cin>>n>>m;
        LL a=1,b=1;
        bool ans=false;
        for(LL i=1;i<=sqrt(n);i++){
            a=i;
            if(n%a==0){
                b=n/a;
                if((a+b)*2+4<=m){
                    ans=true;
                    break;
                }
            }
        }
        if(ans==true)
            printf("Good\n");
        else
            printf("Miss\n");
    }
    return 0;
}
