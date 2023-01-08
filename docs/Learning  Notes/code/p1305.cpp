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
struct Tree{
    char l,r;
    char val;
    Tree(){
        l='*';
        r='*';
        val='\0';
    }
}tree[10000];
char root;
void PreOrder(char root){
    if(root=='*')
    return;
    printf("%c",tree[root].val);
    PreOrder(tree[root].l);
    PreOrder(tree[root].r);
}
void Order(){
    LL n;
    cin>>n;
    for(LL i=0;i<n;i++){
        char now,left,right;
        cin>>now>>left>>right;
        if(i==0)
        root=now;
        tree[now].l=left;
        tree[now].r=right;
        tree[now].val=now;
    }

    // printf("PreOrder:");
    PreOrder(root);
    // printf("\n");

    // printf("InOrder:");
    // InOrder(1);
    // printf("\n");

    // printf("PostOrder:");
    // PostOrder(1);
    // printf("\n");

    // printf("BfsOrder:");
    // BfsOrder(1);
    // printf("\n");

    exit(0);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Order();

    return 0;
}
