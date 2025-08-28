#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>m>>n;
	bool find=true;
	for(int i=m;i<=sqrt(n);i++){
		
		if(n%i==0){
			bool find=false;
		} 
	
		int linshi=i;
		int r=0;
		while(linshi/10>0){
			
			r=r*10+linshi%10;
			linshi=linshi/10;} 
			if(r==i&&find==true){
				cout<<i<<" ";
			
		}
	}
} 
