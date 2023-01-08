#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<cmath>
#include<cctype>
#include<map>
#include<queue>
#include<vector>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
LL n;
struct node{
    node *left=NULL;
    node *right=NULL;
    node *father=NULL;
    LL data=-1;
    LL oider;
}root;
node *last;
void fix(node *root=&root){
    if(root->father==NULL)
        return;
    if(root->data>root->father->data){
        swap(root->data,root->father->data);
        fix(root->father);
    }
}
void push(LL num,node *root=&root){
    if(root->data==-1){
        n+=1;
        root->data=num;
        fix(root);
        last=root;
        return;
    }
    if(num>root->)

}
LL top(){
    return last->data;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    while(n--){
        LL op;
        cin>>op;
        if(op==1){
            LL temp;
            cin>>temp;
            push(temp);
        }
        if(op==2){
            printf("%lld\n",top());
        }
        if(op==3){
            pop();
        }
    }
}
