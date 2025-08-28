#include<bits/stdc++.h>
using namespace std;
int main(){
	string vva;
	
	stack<char> sign;
	stack<long long> num;
 
	while(cin>>vva){
			int i=0;
		while(i<vva.size()){
		bool isnum=false;
		int t=0;
		while(vva[i]>='0'&&vva[i]<='9'){
			t=t*10;
			t+=vva[i]-'0';
			i++;
			isnum=true;
		}
		if(isnum){
			num.push(t%10000);
			if(sign.size()>0&&sign.top()=='*'){
				long long tem=0;
				tem=num.top();
				num.pop();
				tem*=num.top();
				num.pop();
				sign.pop();
				num.push(tem%10000);
			}
		}
		else{
			if(vva[i]=='+'||vva[i]=='*'){
				sign.push(vva[i]);
				i++; 
			}
			
		}
		
	}
	long long all=0;
	while(!num.empty()){
		
			all+=num.top();
			num.pop();
		
	}
	cout<<all%10000<<endl;
	}
}
