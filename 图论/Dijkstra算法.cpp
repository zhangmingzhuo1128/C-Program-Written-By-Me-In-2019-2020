#include<bits/stdc++.h>
 using namespace std;
const int maxn=100010;
struct Edge{
	int to,cost;
	Edge(int t,int c){
		to =t;
		cost =c;
		
	}
};
vector<Edge> G[maxn];//邻接表
int V,E,s,d[maxn];
bool vis[maxn];
struct HeapNode{//优先队列节点
    int  d,u;
	HeapNode(int uu, int dd){
		u =uu;
		d=dd;
	} 
	bool operator<(const HeapNode&h) const{
	    return d>h.d;
		}
}; 
void Dijkstra(){
	memset(d,0x3f,sizeof(d));
	memset(vis,0,sizeof(vis));
	priority_queue<HeapNode> q;
	d[s]=0;
	q.push(HeapNode(s,0));
	while(!q.empty()){
		HeapNode top=q.top();
		q.pop();
		int to=top.u;
		if(vis[to]){
			continue;
		}
		vis[to]=1;
		for(int i=0;i<G[to].size();i++){
			Edge e=G[to][i];
			if(d[to]+e.cost<d[e.to]){
				d[e.to]=e.cost+d[to];
				q.push(HeapNode(e.to,d[e.to]));
			}
		}
	}
}
int main(){
	scanf("%d%d%d",&V,&E,&s);
	for(int i=0;i<E;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		G[a].push_back(Edge(b,c));
	}
	Dijkstra();
	for(int i=0;i<V;i++){
		if(d[i]==0x3f3f3f3f){
			printf("INF\n");
		}
		else{
			printf("%d\n",d[i]);
		}
	}
	
}
