#include<bits/stdc++.h>
using namespace std;
int n;
int a[2016];//index 永远不会大于n 
int done[2016];
void dfs(int index){
	if(index>n){
		for(int j=1;j<=n;j++){
			cout<<a[j]<<" " ; 
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		if(done[i]==0){
			a[index]=i;
			done[i]=1;
			dfs(index+1);
			done[i]=0;
		}
	}
}
int main(){
	cin>>n;
	dfs(1);
}
