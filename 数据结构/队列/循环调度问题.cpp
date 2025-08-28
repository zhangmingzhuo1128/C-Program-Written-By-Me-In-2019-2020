#include<bits/stdc++.h>
using namespace std;
struct task{
	string name;
	int tim;
};
int main (){
	int n,q;
	cin>>n>>q;
	queue<task> vva;
	for(int i=1;i<=n;i++){
		task tem;
		cin>>tem.name>>tem.tim;
		vva.push(tem);
		
	}
	int all=0;
	while(vva.size()){
		task tem=vva.front();
		if(tem.tim<=q){
			all+=tem.tim;
			vva.pop();
			cout<<tem.name<<" "<<all<<endl;
		}
		else{
			all+=q;
			tem.tim-=q;
			vva.pop();
			vva.push(tem);
		}
		
		
		
		
		
	}
}
