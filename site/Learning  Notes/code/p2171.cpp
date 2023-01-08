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
    LL data=-1;

}root;
void insert(const LL &data,node *root=&root){
    if(root==NULL)
        return;
    if(root->data==-1){
        root->data=data;
        return;
    }
    if(data<=root->data){
        if(root->left==NULL)
            root->left=new node;
        insert(data,root->left);
    }
    if(root->data<data){
        if(root->right==NULL)
            root->right=new node;
        insert(data,root->right);
    }
}
LL deep(node *root=&root){
    if(root==NULL)
        return 0;
    return max(deep(root->left)+1,deep(root->right)+1);
}
void PostOrder(node *root=&root){
    if(root==NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    printf("%lld\n",root->data);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin>>n;
    for(LL i=0;i<n;i++){
        LL temp;
        cin>>temp;
        insert(temp);
    }
    printf("deep=%lld\n",deep());
    PostOrder();
    return 0;
}
