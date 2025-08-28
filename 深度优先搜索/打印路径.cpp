#include<bits/stdc++.h>
using namespace std;
int Map[20][20];
int done[20][20];
int sx,sy,ttx,tty;
int xy[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int n,m;
bool Find=0;
void dfs(int sx,int sy){
	if(sx==ttx&&sy==tty){
		Find=1;
		cout<<"(ttx,tty)"<<endl;
		return; 
	}
	for(int i=1;i<=4;i++){
		int tx=sx+xy[i][0];
		int ty=sy+xy[i][1];
		if(Map[tx][ty]==1&&done[tx][ty]==0&&tx<=m&&ty<=n&&tx>=1&&ty>=1)
		done[tx][ty]=1;
		cout<<"(sx,sy)"<<"->";
		dfs(tx,ty);
		done[tx][ty]=0;
	}
}
int main(){
	cin>>m>>n;
	
	for(int i=1;i<=m;m++){
		for(int j=1;j<=n;j++){
			cin>>Map[i][j];
		}
	}
	cin>>sx>>sy>>ttx>>tty;
	dfs(sx,sy);
	if(Find==0){
		cout<<"-1";
	}
}
// 
