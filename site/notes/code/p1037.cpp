#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main(){
    char f;
    string n;
    cin>>f;
    if(f=='0'){
        cout<<0;
        return 0;
    }
    cin>>n;
    
    if(f!='-')
        n=f+n;
    else 
        cout<<'-';
    while(n[n.size()-1]=='0')
        n.erase(n.size()-1,1);
    for(long long i=n.size()-1;i>=0;i--)
        cout<<n[i];
    
    
}
