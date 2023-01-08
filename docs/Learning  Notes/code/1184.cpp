#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<string>
#define LL long long
#define LD long double
using namespace std;


    
int main(){
    LL L,R,i,m,temp,x=0;
    string answer="";
    bool a[114514]={};
    cin>>m;
    for(LL i=1;i<=m;i++){
        cin>>temp;
        a[temp]=true;
    }
    
    for(LL i=0;i<114514;i++)
        if(a[i]==1){
            x++;
            answer+=to_string(i)+" ";
        }
    cout<<x<<endl<<answer;
        
    
}
