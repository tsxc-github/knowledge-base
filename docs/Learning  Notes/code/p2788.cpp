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
    string a;
    cin>>a;
    queue<char> fuhao;
    queue<LL> num;
    LL sum=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'){
            fuhao.push(a[i]);
            num.push(sum);
            sum=0;
        }
        else{
            sum=sum*10+a[i]-'0';}}
    num.push(sum);
    LL ans=num.front();
    num.pop();
    while(!num.empty()){
        if(fuhao.front()=='+'){
            ans+=num.front();
        }
        else if(fuhao.front()=='-'){
            ans-=num.front();
        }
        else if(fuhao.front()=='*'){
            ans*=num.front();
        }
        else if(fuhao.front()=='/'){
            ans/=num.front();
        }
        fuhao.pop();
        num.pop();
    }
    cout<<ans<<endl;
    return 0;

}
