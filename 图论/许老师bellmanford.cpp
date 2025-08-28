#include<bits/stdc++.h>
using namespace std;
const int INF=0x7fffffff;
struct Edge{
	int from;
	int to;
	int cost;
};
Edge edges[10005];
int V,E,r;
int d[10005];
bool bellman_ford(int s){
	for(int i=0;i<V;i++){
		d[i]=INF;
	}
	d[s]=0;
	for(int i=0;i<V;i++){
		bool update=false;
		for(int j=0;j<E;j++){
			Edge e=edges[j];
			if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost){
				d[e.to]=d[e.from]+e.cost;
				update=true;
			}
		}
		if(i==V-1&&update==true){
			cout<<"NEGATIVE CYCLE";
			return false;
		}
		if(update==false){
			break;
		}
	}
	return true;
}
int main(){
	cin>>V>>E>>r;
	for(int i=0;i<E;i++){
		cin>>edges[i].from>>edges[i].to>>edges[i].cost;
	}
	if(bellman_ford(r)){
		for(int i=0;i<V;i++){
			if(d[i]==INF){
				cout<<"INF"<<endl;
			}
			else{
				cout<<d[i]<<endl;
			}
		}
	}
}
/*
4 6 0
0 1 2
0 2 3
1 2 -5
1 3 1
2 3 2
3 1 0
*/
