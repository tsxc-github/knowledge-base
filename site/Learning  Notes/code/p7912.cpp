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

struct fruit{
    fruit(){
        num=0;
    }
    bool apple;
    LL num;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    fruit q[n];
    LL front=0,last=1;
    cin>>q[last].apple;
    q[last].num=1;
    for(LL i=1;i<n;i++){
        bool temp;
        cin>>temp;
        if(q[last-1].apple==temp)
            q[last-1].num++;
        else
            q[last].apple=temp,q[last].num=1,last+=1;
    }
    while(last-front!=0){
        for(LL i=0)
        bool temp;
    }
}
