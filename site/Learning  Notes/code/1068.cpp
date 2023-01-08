#include<iostream>
#include<cstdio>
#include<iomanip>

using namespace std;


    
int main(){
    long long a,k=0,n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a==m)
        k+=1;

    }
    cout<<k;
}
