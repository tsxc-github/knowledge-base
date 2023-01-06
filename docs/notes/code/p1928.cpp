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
string a;
string find(LL now){
    string ans="";
    LL num=0;
    for(LL i=now;i<a.size();i++){
        if(a[i]>='0'&&a[i]<='9'){
            num=num*10+a[i]-'0';
        }
        else if(a[i]=='['){
            ans+=find(i+1);
        }
        else if(a[i]==']'){
            a[i]='\0';
            string temp=ans;
            ans="";
            for(LL i=0;i<num;i++)
            ans+=temp;
            return ans;
        }
        else if(a[i]!='\0'){
            ans+=a[i];
        }
        a[i]='\0';
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>a;
    cout<<find(0);
    return 0;
}
