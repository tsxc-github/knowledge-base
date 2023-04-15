#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
const LL INF=1145141919810;
struct Node{
    vector<LL>edges;
    LL num;
};
int main(){
	LL f,r;
    cin>>f>>r;
    vector<Node>nodes(f+1);
    for(LL i=0;i<r;i++){
        LL a,b;
        cin>>a>>b;
        nodes[a].edges.push_back(b);
        nodes[b].edges.push_back(a);
    }
    function<LL(LL)>dfs=[&](LL to){

    };
    dfs()
}
