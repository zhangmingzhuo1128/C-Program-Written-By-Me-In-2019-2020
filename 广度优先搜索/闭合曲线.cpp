#include<bits/stdc++.h>
using namespace std;
int Map[12][12];
int done[12][12];
int xy[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
struct point{
	int x;
	int y;
}; 
	int num=1;
queue<point> vva;
void bfs(){
	point tem;
	tem.x=0;
	tem.y=0;
	vva.push(tem);
	done[tem.x][tem.y]=1;
	while(vva.size()){
		point p=vva.front();
		vva.pop();
		
		for(int i=0;i<4;i++){
			int x=p.x+xy[i][0];
			int y=p.y+xy[i][1];
			if(x>=0&&y>=0&&x<=11&&y<=11&&done[x][y]==0&&Map[x][y]==0){
				point pnt;
				pnt.x=x;
				pnt.y=y;
				vva.push(pnt);
				done[x][y]=1;
				num++;
			}
	}
		}
		
}
int main(){
	int sum=0;
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			cin>>Map[i][j];
			
			}
		}
	for(int i=0;i<=11;i++){
		for(int j=0;j<=11;j++){
			if(Map[i][j]==0){
				sum++;
			}
		}
	}
	bfs();
	sum=sum-num;
	cout<<sum;
	 
}
