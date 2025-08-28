#include<bits/stdc++.h>
using namespace std;
int indeg[100001]={0};
vector<int> G[100001];
int n,m;
int k=0;
int j[100001]={0};
void bfs(){
	queue<int> q;
	for(int i=1;i<=n;i++){
		if(indeg[i]==0){
			q.push(i);
		}
	}
	while(q.size()){
		int u=q.front();
		q.pop();
		k++;
		for(int i=0;i<G[u].size();i++){
			int v=G[u][i];
			indeg[v]--;
			j[v]=j[u]+1;
			if(indeg[v]==0){
				q.push(v);
			}
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		G[b].push_back(a);
		indeg[a]++;
	}
	bfs();
	int s=0;
	for(int i=1;i<=n;i++){
		s+=j[i];
		s+=100;
	}
	if(k==n){
		cout<<s<<endl;
	}
	else{
		cout<<"impossible";
	}
}
