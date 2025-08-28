#include<bits/stdc++.h>
using namespace std;
int c,n;
int ans=-99999999;
int w[101]; 
void dfs(int sum,int step){
	if(ans==c){
		return;
	}
	if(sum>c){
		return;
	}
	if(step==n+1){
		return;
	}
	ans=max(ans,sum);
	dfs(sum+w[step+1],step+1); 
	dfs(sum,step+1);
	
} 
int main(){
	cin>>n>>c;
	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	dfs(0,0);
	cout<<ans;
}
