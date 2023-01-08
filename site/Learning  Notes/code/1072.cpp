#include<iostream>
#include<cstdio>
#include<iomanip>

using namespace std;
double a,b,c,d,n,x,y;

    
int main(){
    cin>>n;
    cin>>a>>b;
    x=b/a;
    for(int i=2;i<=n;i++){
        cin>>a>>b;
        y=b/a;
        if(x-y>0.05) cout<<"worse"<<endl;
        else{
        if(y-x>0.05) cout<<"better"<<endl;
        else cout<<"same"<<endl;}
        
    }
}
