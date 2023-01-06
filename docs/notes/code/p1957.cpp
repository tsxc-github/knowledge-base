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
int main(){
    LL n,a=0,b;
    cin>>n;
    char c;
    char z;
    string temp;
    for(LL i=1;i<=n;i++){
        a=0;
        b=0;
        c=0;
        cin>>c;
        if(c=='a'||c=='b'||c=='c'){
            cin>>a;
            cin>>b;
            if(c=='a')
            temp=to_string(a)+'+'+to_string(b)+'='+to_string(a+b);
            if(c=='b')
            temp=to_string(a)+'-'+to_string(b)+'='+to_string(a-b);
            if(c=='c')
            temp=to_string(a)+'*'+to_string(b)+'='+to_string(a*b);
            cout<<temp<<endl;
            cout<<temp.size()<<endl;
            z=c;
            }
            else{
                a=c-'0';
                for(LL i=1;(c=getchar())!=' ';i++){
                    a=(c-'0')+a*10;
                }
                cin>>b;
                if(z=='a')
                temp=to_string(a)+'+'+to_string(b)+'='+to_string(a+b);
                if(z=='b')
                temp=to_string(a)+'-'+to_string(b)+'='+to_string(a-b);
                if(z=='c')
                temp=to_string(a)+'*'+to_string(b)+'='+to_string(a*b);
                cout<<temp<<endl;
                cout<<temp.size()<<endl;}
        
    }
    return 0;
}
