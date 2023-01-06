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
        LL n,m;
        cin>>m>>n;
        bool a[1001]={};
        queue<LL> q;
        LL ans=0;
        for(LL i=0;i<n;i++){
            LL temp;
            cin>>temp;
            if(!a[temp]){
                ans++;
                if(q.size()>=m){
                    a[q.front()]=false;
                    q.pop();}
                q.push(temp);
                a[temp]=true;
            }
            
        }
        cout<<ans;
        return 0;
        
    }
