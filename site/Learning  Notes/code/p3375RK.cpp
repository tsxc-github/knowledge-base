#include<bits/stdc++.h>
using namespace std;
#define LL unsigned long long
const LL HASHBIT=26;
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    for(LL i=0;i<s1.size();i++){
        s1[i]-='A'-1;
    }
    for(LL i=0;i<s2.size();i++){
        s2[i]-='A'-1;
    }
    LL hashs1=0;
    LL hashs2=0;
    for(LL i=0;i<s2.size();i++){
        hashs1=hashs1*HASHBIT+s1[i];
        hashs2=hashs2*HASHBIT+s2[i];
    }
    if(hashs1==hashs2)
        printf("%lld\n",1);
    for(LL i=s2.size();i<s1.size();i++){
        hashs1-=s1[i-s2.size()]*pow(HASHBIT,s2.size()-1);
        hashs1=hashs1*HASHBIT+s1[i];
        if(hashs1==hashs2)
            printf("%lld\n",i-s2.size()+1+1);
    }
    LL next[s2.size()+1]={};
    for(LL i=1;i<=s2.size();i++){
        for(LL j=0;j<i;j++){
            if(s2.substr(0,j)==s2.substr(i-j,j))
            next[i]=j;
        }
    }
    for(LL i=1;i<=s2.size();i++)
        printf("%lld ",next[i]);
    return 0;
}
//此算法只能通过小数据，由于仅有64bit的比较，无法计算较大匹配串
//在OI中适用性较差