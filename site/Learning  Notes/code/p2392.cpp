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
#define MAX 1145140
#endif
int main(){
    ios::sync_with_stdio(false);
    LL s[5];
    cin>>s[1]>>s[2]>>s[3]>>s[4];
    LL left=0,right=0,temp,ans=0;
    for(LL k=1;k<=4;k++){
        for(LL i=0;i<s[k];){
            if(s[k]==1){
                cin>>temp;
                ans+=temp;
                break;}
            else if(i==0){
                cin>>temp;
                i++;
                left=temp;
                cin>>temp;
                i++;
                right=temp;}
            if(left==0||right==0){
            cin>>temp;i++;}
            if(left==0)
            left=temp;
            if(right==0)
            right=temp;
            if(left>=right){
                ans+=right;
                left-=right;
                right=0;
                continue;}
            if(left<right){
                ans+=left;
                right-=left;
                left=0;
                continue;}}
        if(left!=0)
        ans+=left,left=0;
        if(right!=0)
        ans+=right,right=0;
    }
    cout<<ans<<endl;
    return 0;
}
