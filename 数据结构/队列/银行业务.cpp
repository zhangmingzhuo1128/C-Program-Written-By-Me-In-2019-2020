#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	queue<int> vva;
	queue<int> vvb;
	while(cin>>n){
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			if(x%2==1){
				vva.push(x);
			}
			else{
				vvb.push(x);
			}
		}
		for(int i=1;i<=n;i++){
			if(vva.size()){
				cout<<vva.front()<<" ";
				vva.pop();
				cout<<vva.front()<<" ";
				vva.pop();
				i++;
			}
			if(vvb.size()){
				cout<<vvb.front()<<" ";
				vvb.pop();
			}
		}
	}
} 
