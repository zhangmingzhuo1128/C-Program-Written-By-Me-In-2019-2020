//
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	queue<int> vva;
	for(int i=1;i<=n;i++){
		vva.push(i);
		
	}
	int cnt=1;
	while(vva.size()>1){
		if(cnt==m){
			
			vva.pop();
			cnt=1;
		}
		else{
			cnt++;
			int x=vva.front();
			vva.pop();
			vva.push(x);
		}
	}
	cout<<vva.front();
} 
