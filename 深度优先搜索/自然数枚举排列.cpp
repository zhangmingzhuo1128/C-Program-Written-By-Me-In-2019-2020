#include<bits/stdc++.h>
using namespace std;
int a[101];
int n;
void dfs(int index,int sum){
	if(sum==n){
		for(int i=1;i<index-1;i++){
		cout<<a[i]<<"+";
		
	}
	cout<<a[index-1]<<endl;
	}
	
	for(int i=1;i<=n-1;i++){
		if(i>=a[index-1]&&sum+i<=n){
			a[index]=i;
		    dfs(index+1,sum+i);
		}
	}
}
int main(){
	cin>>n;
	dfs(1,0);
	
}
