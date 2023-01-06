#include<iostream> 
#include<iomanip>
using namespace std;
int x,y,c;
int main()
{
	cin>>x>>y;
    if(y==2) {if(x%100==0){if(x%400==0)cout<<29;else cout<<28;}
        else{if(x%4==0)cout<<29;else cout<<28;}}
    else {
        switch(y){
            case 1:case 3:case 5:case 7:case 8:case 10:case 12: cout<<31;break;
            default: cout<<30;






        }
        
    }
}