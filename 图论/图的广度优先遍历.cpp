#include<bits/stdc++.h>
using namespace std;
vector<int> G[105];
bool done[109];
int d[109];

void bfs(){
	queue<int> vva;
	done[1]=1;
	d[1]=0;
	vva.push(1);
	while(vva.size()){
		int now=vva.front();
		vva.pop();
		for(int i=0;i<G[now].size();i++){ 
			int x=G[now][i];//这里必须以零开头
			if(!done[x]){
				done[x]=1;
				d[x]=d[now]+1;
				vva.push(x);
			}
		}
	}
}
int main(){
	memset(d,-1,sizeof(d));
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		for(int j=1;j<=y;j++){
		    int a;
			cin>>a;
			G[x].push_back(a);	
		}
	}
	bfs();
	for(int i=1;i<=n;i++){
		cout<<i<<" "<<d[i]<<endl;
	}
	
}
