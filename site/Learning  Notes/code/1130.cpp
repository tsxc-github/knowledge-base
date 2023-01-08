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
    string a;
    cin>>a;
    char x='a';
    LL z=0;
    LL answer[27]={};
    for(LL i=0;i<a.size();i++){
        for(LL j=0;j<=26;j++)
            if(a[i]==x+j){
                answer[x+j-'a']++;
                break;}
    }
    bool abc[27]={};
    for(LL j=0;j<=26;j++)
        if(answer[x-'a'+j]==1)
            abc[x-'a'+j]=true;
    for(LL i=0;i<a.size();i++)
        if(abc[a[i]-'a']==true){
            cout<<a[i];
            return 0;
        }
    cout<<"no";
    return 0;
}