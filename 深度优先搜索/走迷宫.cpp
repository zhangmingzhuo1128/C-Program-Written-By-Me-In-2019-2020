#include<bits/stdc++.h>
using namespace std;
int n,m;
int a=1000000;
char Map[105][105];
bool done[105][105];
int xy[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
void dfs(int sx,int sy,int step){
	for(int i=0;i<4;i++){
		int tx=sx+xy[i][0];
		int ty=sy+xy[i][1];
		if(Map[tx][ty]=='T'){
			a=min(step+1,a);
		}
		if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&done[tx][ty]==0&&Map[tx][ty]!='#'){
			if(Map[tx][ty]=='T'){
			a=min(step+1,a);
		}
			done[tx][ty]=1;
			dfs(tx,ty,step+1);
			done[tx][ty]=0;
		}
	}
}

int main(){
	cin>>n>>m;
	int sx,sy;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>Map[i][j];
			if(Map[i][j]=='S'){
				sx=i;
				sy=j;
			}
		}
	}
	
	dfs(sx,sy,0);
	cout<<a;
}
