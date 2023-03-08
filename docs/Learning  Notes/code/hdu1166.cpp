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
    node* left;
    node* right;
    node* father;
    LL data;
    LL v;
    LL start;
    LL end;
    node(node* father,LL start,LL end,LL data,node* left=NULL,node* right=NULL){
        this->data=data;
        this->left=left;
        this->right=right;
        this->father=father;
        this->start=start;
        this->end=end;
        v=0;
    }
};
node* build(LL a[],LL asize){
    queue<node*> q;
    for(LL i=0;i<asize;i++){
        q.push(new node(NULL,i,i,a[i]));}
    node* t1=NULL;
    node* t2=NULL;
    while(q.size()!=1){
            LL n=q.size();
            for(LL i=0;i<n;i++){
                if(t1==NULL){
                    t1=q.front();
                    q.pop();}
                else{
                    if(t2==NULL){
                        t2=q.front();
                        q.pop();
                        node* t=new node(NULL,t1->start,t2->end,t1->data+t2->data,t1,t2);
                        t->left->father=t;
                        t->right->father=t;
                        q.push(t);
                        t1=NULL;
                        t2=NULL;}}}
            if(t1!=NULL){
                q.push(t1);
                t1=NULL;}}
    return q.front();
}

void maketag_jia(node* root,LL k){
    root->v+=k;
    root->data+=k*(root->end-root->start+1);
}
void update_down_jia(node* root){
    if(root->left!=NULL)
    root->left->v+=root->v,root->left->data+=(root->left->end-root->left->start+1)*root->v;
    if(root->right!=NULL)
    root->right->v+=root->v,root->right->data+=(root->right->end-root->right->start+1)*root->v;
    root->v=0;
}
void update_up_jia(node* root){
    root->data=root->left->data+root->right->data;
}
void change_jia(node* root,LL start,LL end,LL k){
    if(root==NULL)return;
    if(root->start>end||root->end<start){
        return;}
    if(root->start>=start&&root->end<=end){
        maketag_jia(root,k);
        return;}
    update_down_jia(root);
    change_jia(root->left,start,end,k);
    change_jia(root->right,start,end,k);
    update_up_jia(root);
}
LL find(node* root,LL start,LL end){
    if(root==NULL)return 0;
    if(root->start>end||root->end<start){
        return 0;}
    if(root->start>=start&&root->end<=end)
    return root->data;
    update_down_jia(root);
    return find(root->left,start,end)+find(root->right,start,end);
}
void del(node* root){
    if(root==NULL)return;
    del(root->left);
    del(root->right);
    free(root);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    LL T;
    cin>>T;
    for(LL k=1;k<=T;k++){
        LL n;
        cin>>n;
        LL a[n];
        for(LL i=0;i<n;i++){
            cin>>a[i];}
        node* root=build(a,n);
        printf("Case %lld:\n",k);
        string s;
        do{
            cin>>s;
            if(s=="End")
                break;
            if(s=="Add"){
                LL x,k;
                cin>>x>>k;
                change_jia(root,x-1,x-1,k);
            }
            if(s=="Sub"){
                LL x,k;
                cin>>x>>k;
                change_jia(root,x-1,x-1,-k);
            }
            if(s=="Query"){
                LL x,y;
                cin>>x>>y;
                update_down_jia(root);
                printf("%lld\n",find(root,x-1,y-1));
            }
        }while(true);
        del(root);}
    return 0;
    
}