#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<cctype>
#define LL long long
#define LD long double
using namespace std;
int main(){
    LL m,n,p;
    cin>>m>>n>>p;
    string 证词[p],name[m],说谎的人[n],星期英语[8]={"114514","Today is Sunday.","Today is Monday.","Today is Tuesday.","Today is Wednesday.","Today is Thursday.","Today is Friday.","Today is Saturday."};
    LL 谁的证词[p]={},证词正确性[p]={},today=0/*今天是星期几*/,week[114514]={};
    
    for(LL i=0;i<m;i++){
        cin>>name[i];
    }
    for(LL i=0;i<p;i++){
        cin>>证词[i];
        证词[i].erase(证词[i].size()-1,1);
        for(;name[谁的证词[i]]==证词[i];谁的证词[i]++);
        getchar();
        getline(cin,证词[i]);
        }
    for(LL i=0;i<p;i++){
        for(LL j=1;j<=7,j++)
            if(证词[i]==星期英语[j]){

                if(today!=j)
                    if(today==0)
                        today=j;
                    else
                        

            }
    }
    
    return 0;
}