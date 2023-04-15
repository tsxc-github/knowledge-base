#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL INF=1145141919810;
string zhengchang(string timu,string inorout){
    if(inorout=="in")
        return "freopen(\""+timu+'.'+inorout+"\",\"r\",std"+inorout+");";
    if(inorout=="out")
        return "freopen(\""+timu+'.'+inorout+"\",\"w\",std"+inorout+");";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("T1.in","r",stdin);
    // freopen("T1.out","w",stdout);
    LL T;
    cin>>T;
        LL n,m;
        cin>>n>>m;
        string timu[m];
        for(LL i=0;i<m;i++){
            cin>>timu[i];
        }
        for(LL k=0;k<n;k++){
            bool zuzong=false;
            bool lezi=false;
            for(LL i=0;i<m;i++){
                string in;
                string out;
                cin>>in>>out;
                // printf("debug:in:%s out:%s\n",zhengchang(timu[i],"in").c_str(),zhengchang(timu[i],"out").c_str());
                if(in.substr(0,10)=="//freopen("&&in.substr(in.size()-2,2)==");"){
                    zuzong=true;
                }
                // printf("debug:%s%s\n",in.substr(0,10).c_str(),in.substr(in.size()-2,2).c_str());
                if(out.substr(0,10)=="//freopen("&&out.substr(out.size()-2,2)==");"){
                    zuzong=true;
                }
                if(in!=zhengchang(timu[i],"in")||out!=zhengchang(timu[i],"out")){
                    lezi=true;
                }
            }
            if(zuzong==true){
                printf("Wrong file operation takes you to your ancestors along with your 3 years' efforts on OI.\n");
                continue;
            }
            if(lezi==true){
                printf("Good luck and have fun.\n");
                continue;
            }
            printf("PION2202 RP++.\n");
        }
    return 0;
}