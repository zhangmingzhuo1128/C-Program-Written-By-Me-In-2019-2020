#include<bits/stdc++.h>
using namespace std;
int main(){
	string qm;
	cin>>qm;
	stack<char> vva;
	bool isok=true;
	
	for(int i=0;i<qm.size();i++){
		
		if(qm[i]=='('||qm[i]=='['){
			vva.push(qm[i]);
		}
		if(qm[i]==')'){
			if(vva.size()==0){
				isok=false;
				break;
			}
			if(vva.top()=='('){
				vva.pop();
			}
			else{
				isok=false;
				break;
			}
		}
		if(qm[i]==']'){
			if(vva.size()==0){
				isok=false;
				break;
			}
			if(vva.top()=='['){
				vva.pop();
			}
			else{
				isok=false;
				break;
			}
		}			
		
	}
	if(isok==true&&vva.size()==0){
		cout<<"OK";
	}
	else{
		cout<<"Wrong";
	}
}
