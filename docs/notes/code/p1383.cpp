#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
map<US,stack<US>*>zhandizhi1;
map<US,stack<bool>*>zhandizhi2;
stack<US>* zhan1=new stack<US>;
stack<bool>* zhan2=new stack<bool>;
string answer;
void unundo(US dizhi);
void undo(LL cishu,US dizhi=0){
    stack<US>* zhanx=new stack<US>;
    stack<bool>* zhany=new stack<bool>;
    bool a;
    bool temp=true;
    if(cishu!=-1){
        for(LL i=1;i<=cishu;i++){
            a=zhan2->top();
            if(a==1){
                zhanx->push(zhan1->top());
                zhany->push(zhan2->top());
                answer.erase(answer.size()-1);
                zhan1->pop();
                zhan2->pop();
            }
            if(a==0){
                if(zhandizhi1[zhan1->top()]->top()!=0){
                unundo(zhan1->top());}
                else {
                    zhandizhi1[zhan1->top()]->pop();
                    zhandizhi2[zhan1->top()]->pop();
                    undo(-1,zhan1->top());}
                temp=false;
            }}
            if(temp){
            US i=1;
            for(;zhandizhi1[i]!=NULL;i++);
            zhandizhi1[i]=zhanx;
            zhandizhi2[i]=zhany;
            zhan1->push(i);
            zhan2->push(0);}}
    else{
        while(zhandizhi1[dizhi]->size()!=0){
            a=zhandizhi2[dizhi]->top();
            if(a==1){
            zhanx->push(zhandizhi1[dizhi]->top());
            zhany->push(zhandizhi2[dizhi]->top());
            answer.erase(answer.size()-1);
            zhandizhi1[dizhi]->pop();
            zhandizhi2[dizhi]->pop();}
            if(a==0){
                unundo(zhandizhi1[dizhi]->top());
            }}
        zhan1->pop();
        zhan2->pop();
        delete zhandizhi1[dizhi];
        delete zhandizhi2[dizhi];
        zhandizhi1[dizhi]=NULL;
        zhandizhi2[dizhi]=NULL;
        US i=1;
        for(;zhandizhi1[i]!=NULL;i++);
        zhandizhi1[i]=zhanx;
        zhandizhi2[i]=zhany;
        zhan1->push(i);
        zhan2->push(0);}
    return;}
void unundo(US dizhi){
    stack<US>* unzhanx=new stack<US>;
    stack<bool>* unzhany=new stack<bool>;
    bool a;
    while(zhandizhi2[dizhi]->size()!=0){
        a=zhandizhi2[dizhi]->top();
        if(a==1){
            answer+=(char)zhandizhi1[dizhi]->top();
            unzhanx->push(zhandizhi1[dizhi]->top());
            unzhany->push(zhandizhi2[dizhi]->top());
            zhandizhi1[dizhi]->pop();
            zhandizhi2[dizhi]->pop();
        }
        if(a==0){
            undo(-1,zhandizhi2[dizhi]->top());
        }
    }
    delete zhandizhi1[dizhi];
    delete zhandizhi2[dizhi];
    zhandizhi1[dizhi]=NULL;
    zhandizhi2[dizhi]=NULL;
    unzhanx->push(0);
    unzhany->push(0);
    zhan1->pop();
    zhan2->pop();
    if(unzhanx->size()){
    US i=1;
    for(;zhandizhi1[i]!=NULL;i++);
    zhandizhi1[i]=unzhanx;
    zhandizhi2[i]=unzhany;
    zhan1->push(i);
    zhan2->push(0);}
    return;
}
int main(){
    LL n;
    cin>>n;
    char a;
    US temp;
    for(LL i=1;i<=n;i++){
        cin>>a;
        if(a=='T'){
            cin>>a; 
            zhan1->push(a);
            zhan2->push(1);
            answer+=a;}
        if(a=='Q'){
            cin>>temp;
            cout<<answer[temp-1]<<endl;}
        if(a=='U'){
            cin>>temp;
            undo(temp);
        }
        }
    return 0;}

