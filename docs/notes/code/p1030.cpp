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
void build(string ins,string posts,node *root=&root){
	if(ins.size()==0||posts.size()==0)
		return;
	root->data=posts[posts.size()-1];
	LL r=ins.find(root->data);
	if(r!=0){
		root->left=new node;
		build(ins.substr(0,r),posts.substr(0,r),root->left);
	}
	if(r!=ins.size()-1){
		root->right=new node;
		build(ins.substr(r+1),posts.substr(r,ins.size()-(r+1)),root->right);
	}
}
void PerOrder(node *root=&root){
    if(root==NULL)
        return;
    printf("%c",root->data);
    PerOrder(root->left);
    PerOrder(root->right);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string ins;
	string posts;
    cin>>ins>>posts;
    build(ins,posts);
    PerOrder();
    return 0;
}