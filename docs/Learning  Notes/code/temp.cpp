#include<bits/stdc++.h>
using namespace std;
#define LL long long 
#define ULL unsigned long long
const string FileName="p8868";
namespace xianduanshu{
    template<typename T>
    struct xianduanshu{
        struct node{
            T v;
            LL l,r;
            node *left=NULL;
            node *right=NULL;
        };
        node *root;
        T *data;
        LL size;
        T find(LL l,LL r,node* root){
            if(l==root->l&&r==root->r)
                return root->v;
            T v=-1;
            if(root->left->r>=l)
                v=max(find(l,min(root->left->r,r),root->left),v);
            if(root->right->l<=r)
                v=max(find(max(root->right->l,l),r,root->right),v);
            return v;
        }
        void build(node* root,LL l,LL r){
            root->l=l;
            root->r=r;
            if(r-l==0){
                root->v=data[l];
                return;}
            root->left=new node;
            build(root->left,l,l+(r-l)/2);
            root->right=new node;
            build(root->right,l+(r-l)/2+1,r);

            root->v=max(root->left->v,root->right->v);
        }
        xianduanshu(LL Size,T *Data){
            size=Size;
            data=Data;
            root=new node;
            build(root,1,Size);
        }
        
        
    };
    
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen((FileName+".in").c_str(),"r",stdin);
    freopen((FileName+".out").c_str(),"w",stdout);
    #endif
    LL T;
    cin>>T;
    LL n;
    cin>>n;
    LL x[n+1];
    for(LL i=1;i<=n;i++){
        cin>>x[i];
    }
    xianduanshu::xianduanshu<LL>a(n,x);

    LL y[n+1];
    for(LL i=1;i<=n;i++){
        cin>>y[i];
    }
    xianduanshu::xianduanshu<LL>b(n,y);
    
    ULL ans=0;
    LL Q;
    cin>>Q;
    for(LL i=0;i<Q;i++){
        LL l,r;
        cin>>l>>r;
        for(LL p=l;p<=r;p++)
            for(LL q=p;q<=r;q++)
                ans+=a.find(p,q,a.root)*b.find(p,q,b.root);
    }
    cout<<ans;
    return 0;
}