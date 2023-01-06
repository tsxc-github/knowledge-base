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
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
struct node{
    node *left=NULL;
    node *right=NULL;
    char data=-1;

}root;
void build(string ins,string pers,node *root=&root){
	if(ins.size()==0||pers.size()==0)
		return;
	root->data=pers[0];
	LL r=ins.find(root->data);
	if(r!=0){
		root->left=new node;
		build(ins.substr(0,r),pers.substr(1),root->left);
	}
	if(r!=ins.size()-1){
		root->right=new node;
		build(ins.substr(r+1),pers.substr(r+1),root->right);
	}
}
void PostOrder(node *root=&root){
    if(root==NULL)
        return;
    
    PostOrder(root->left);
    PostOrder(root->right);
    printf("%c",root->data);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string ins;
	string pers;
    cin>>ins>>pers;
    build(ins,pers);
    PostOrder();
    return 0;
}