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
char panduan(const string &s){
	bool b0=false,b1=false;
	for(LL i=0;i<s.size();i++){
		if(s[i]=='0')
			b0=true;
		if(s[i]=='1')
			b1=true;
	}
	if(b0==true&&b1==true){
		return 'F';
	}
	if(b0==true)
	return 'B';
	if(b1==true)
	return 'I';
}
void build(string s,node *root=&root){
	if(root->data==-1)
		root->data=panduan(s);
	if(s.size()>1){
		if(root->left==NULL)
			root->left=new node;
		build(s.substr(0,s.size()/2),root->left);
		if(root->right==NULL)
			root->right=new node;
		build(s.substr(s.size()/2),root->right);
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
    LL n;
    cin>>n;
    string s;
    cin>>s;
    build(s);
    PostOrder();
    return 0;
}