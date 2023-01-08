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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a,b;
    map<string,string>m;
    vector<string>v;
    string t1,t2;
    cin>>a>>b;
    while(cin>>t1>>t2){
        m[t1]=t2;
        v.push_back(t1);}
    queue<string>q;
    q.push(a);
    LL ans=0;
    while(!q.empty()){
        if(ans>10)
        break;
        LL temp=q.size();
        for(LL i=0;i<temp;i++){
            string t=q.front();
            q.pop();
            if(t==b){
                printf("%lld\n",ans);
                return 0;}
            for(LL i=0;i<v.size();i++){
                if(t.find(v[i])!=string::npos){
                    string t1=t;
                    t1.replace(t1.find(v[i]),v[i].length(),m[v[i]]);
                    q.push(t1);
                }
            }
            q.push(m[t]);
        }ans++;
    }
    printf("NO ANSWER!");
    return 0;
}
