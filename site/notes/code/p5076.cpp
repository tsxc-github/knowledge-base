#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
LL now=2;
struct p5076
{
    LL left,right;
    LL value,size;
    LL num;
    p5076(){};
    p5076(LL _left,LL _right,LL _value,LL _size):left(_left),right(_right),value(_value),size(_size),num(1){}
}a[1145141919]={};
void update(LL x){
    a[x].size=a[a[x].left].size+a[a[x].right].size+a[x].num;
}
void in(LL x,LL &root){
    if(x<a[root].value){
        if(a[root].left==0){
            a[a[root].left=now++]=p5076(0,0,1,x);
            update(0);
            return;}
        else in(x,root);}
    else if(x>a[root].value){
        if(a[root].right==0){
            a[a[root].right=now++]=p5076(0,0,1,x);
            update(0);
            return;}
        else in(x,root);}
    else a[root].num++;
    update(root);
}
LL paiming(LL x,LL root){
    if(root!=0){
        if(x<a[root].value)
        return paiming()
    }
}
int main(){
    ios::sync_with_stdio(false);
    LL n,x;
    cin>>n;
    a[1]=p5076(0,0,1,2147483647);

}
