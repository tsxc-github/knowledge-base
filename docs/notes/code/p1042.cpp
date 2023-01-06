#include<bits/stdc++.h>
using namespace std;
int main(){
	char temp;
	int ans11[3]={};
	int ans21[3]={};
	map<int,int>abc[3];
	int jishu=0;
	while((temp=getchar())!='E'){
		if(temp=='W'){
		ans11[1]++;
		ans21[1]++;}
		if(temp=='L'){
		ans11[2]++;
		ans21[2]++;}
		if(ans11[1]==11||ans11[2]==11&&abs(ans11[1]-ans11[2])>=2){
		printf("%d:%d\n",ans11[1],ans11[2]);
		ans11[1]=0;
		ans11[2]=0;}
		if(ans21[1]==21||ans21[2]==21&&abs(ans21[1]-ans21[2])>=2){
			abc[jishu][1]=ans21[1];
			abc[jishu][2]=ans21[2];
			jishu++;
			ans21[1]=0;
			ans21[2]=0;}
	}
	printf("%d:%d\n",ans11[1],ans11[2]);
	cout<<endl;
	for(int i=0;i<jishu;i++){
		cout<<abc[i][1]<<':'<<abc[i][2]<<endl;
	}
	printf("%d:%d",ans21[1],ans21[2]);
	return 0;
}