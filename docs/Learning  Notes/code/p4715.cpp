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
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;

struct node{
    LL num,i;
};
bool operator<(node a,node b){
    return a.num<b.num;}
int main(){
    ios::sync_with_stdio(false);
    LL n;
    cin>>n;
    node x,temp,temp2;
    queue<node> q;
    for(LL i=1;i<=(2<<(n-1));i++){
        cin>>x.num;
        x.i=i;
        q.push(x);}
    while(q.size()!=2){
        temp=q.front();
        q.pop();
        q.push(max(temp,q.front()));
        q.pop();}
    temp=q.front();
    q.pop();
    cout<<min(temp,q.front()).i;
    return 0;
}
