#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
string fanzhuan(string n){
    string answer;
    if(n=="0"){
        return "0";
    }
    bool temp;
    if(n[n.size()-1]=='%'){
    n.erase(n.size()-1,1);
    temp=true;}
    while(n[n.size()-1]=='0')
        n.erase(n.size()-1,1);
    for(long long i=n.size()-1;i>=0;i--)
        answer+=n[i];
    if(temp)
    return answer+='%';
    else
    return answer;
}
int main(){
    LL a;
    string n,temp;
    char c;
    cin>>n;
    for(LL i=0;i<n.size();i++){
    if(n[i]=='.'){
        temp=n;
        n.erase(i);
        temp.erase(0,n.size()+1);
        temp=fanzhuan(temp);
        while(temp[temp.size()-1]=='0'&&temp.size()!=1)
        temp.erase(temp.size()-1,1);
        cout<<fanzhuan(n)<<'.'<<temp;
        return 0;}
    if(n[i]=='/'){
        temp=n;
        n.erase(i);
        temp.erase(0,n.size()+1);
        cout<<fanzhuan(n)<<'/'<<fanzhuan(temp);
        return 0;}
    if(n[i]=='%'){
        n=fanzhuan(n);
        if(n=="%")
        cout<<"0%";
        else
        cout<<n;
        return 0;
    }}
    cout<<fanzhuan(n);
    return 0;
}
