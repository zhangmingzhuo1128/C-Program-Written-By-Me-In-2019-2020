#include<bits/stdc++.h>
using namespace std;
vector<int> G[105];
int ktime[105],jtime[105],v[105];//��ʼ�����Ƿ���� 
int ljhtime=0;//ȫ�ֵķ���ʱ��� 
int n; 
void dfs(int id){
	v[id]=1;
	ktime[id]=++ljhtime;
	for(int i=0;i<G[id].size();i++){
		if(!v[G[id][i]]){
			dfs(G[id][i]);
		}
		
	}
	ljhtime++;
	jtime[id]=ljhtime;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		for(int i=1;i<=y;i++){
			int a;
			cin>>a;
			G[x].push_back(a);
			
		}
	}
	//���ܲ���ͨ
	for(int i=1;i<=n;i++){
	if(!v[i]){
			dfs(i);
		}
		
	}
	for(int i=1;i<=n;i++){
		cout<<i<<" "<<ktime[i]<<" "<<jtime[i]<<endl;
	} 
}
