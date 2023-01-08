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
struct node{
    vector<LL>v;
    LL rd=0;
    LL len;
};
node* a;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n;
    a= new node [n+1];
    for(LL i=1;i<=n;i++){
        LL number;
        cin>>number;
        cin>>a[number].len;
        LL task;
        while((cin>>task)&&task!=0){
            a[task].v.push_back(number);
            a[number].rd++;
        }
    }
    queue<LL>s;
    for(LL i=1;i<=n;i++){
        if(a[i].rd==0)
            s.push(i);
    }
    // cout<<s.size()<<endl;
    LL ans=0;
    queue<LL>temp;
    while(!s.empty()){
        swap(s,temp);
        // cout<<temp.size()<<endl;
        LL time=1145141919810;
        queue<LL>temp1;
        while(!temp.empty()){
            LL p = temp.front();
            temp.pop();
            time=min(time,a[p].len);
            temp1.push(p);
        }
        swap(temp,temp1);
        while(!temp.empty()){
            LL p = temp.front();
            temp.pop();
            a[p].len-=time;
            if(a[p].len!=0){
                s.push(p);
            }
            else{
                for(LL i=0;i<a[p].v.size();i++){
                    a[a[p].v[i]].rd--;
                    if(a[a[p].v[i]].rd==0)
                        s.push(a[p].v[i]);
                }
            }
        }
        ans+=time;
    }
    cout<<ans;
    return 0;
}


/*
【题目描述】
见p1113.md
*/