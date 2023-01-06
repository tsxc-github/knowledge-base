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
    string aba;
    string maxx,minn;
    char z;
    while((z=(char)getchar())!='\n'){
        if(z!=','&&z!=' '){
            aba+=z;
            continue;}
        if(aba.size()==0)
        continue;
        if(maxx.size()==0){
            maxx=aba;
            minn=aba;
            aba="";
            continue;}
        if(aba[0]==',')
        aba.erase(0,1);
        if(aba[aba.size()-1]==',')
        aba.erase(aba.size()-1,1);
        if(aba.size()>maxx.size())
            maxx=aba;
        if(aba.size()<minn.size())
            minn=aba;
        aba="";
    }
    if(aba[0]==',')
        aba.erase(0,1);
        if(aba[aba.size()-1]==',')
        aba.erase(aba.size()-1,1);
        if(aba.size()>maxx.size())
            maxx=aba;
        if(aba.size()<minn.size())
            minn=aba;
        aba="";
    cout<<maxx<<endl<<minn;
}
