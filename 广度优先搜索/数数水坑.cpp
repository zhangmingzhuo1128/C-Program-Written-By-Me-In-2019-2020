#include<bits/stdc++.h>
using namespace std;
int n,m;
char Map[128][128];
bool done[128][128];

int xy[8][2]={{1,0},{1,1},{1,-1},{-1,-1},{-1,0},{-1,1},{0,1},{0,-1}};
struct point{
	int x,y;
};
queue<point> vva;
void bfs(int sx,int sy){
	point tem;
	tem.x=sx;
	tem.y=sy;
	vva.push(tem);
	done[sx][sy]=1;
	while(vva.size()){
		point p=vva.front();
		vva.pop();
		
		for(int i=0;i<8;i++){
			int x=p.x+xy[i][0];
			int y=p.y+xy[i][1];
			if(x>=1&&y>=1&&x<=n&&y<=m&&done[x][y]==0&&Map[x][y]=='W'){
				point pnt;
				pnt.x=x;
				pnt.y=y;
				vva.push(pnt);
				done[x][y]=1;
			}
	}
		}
		
}


int main(){
    int sum=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>Map[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(Map[i][j]=='W'&&done[i][j]==0){
				bfs(i,j);
				sum++;
			}
		}
	}
	cout<<sum;
}
