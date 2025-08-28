#include<bits/stdc++.h>
using namespace std;
int main(){
	string vva;
	
	stack<char> sign;
	stack<long long> num;
	while(cin>>vva){
		for(int i=0;i<vva.size();i++){
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
			if(num.size()>0&&sign.top()=='*'){
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
			if(vva[i]=='+'||vva[i]=='-'){
				sign.push(vva[i]);
				i++;]
			}
			
		}
		
	}
	}
}
