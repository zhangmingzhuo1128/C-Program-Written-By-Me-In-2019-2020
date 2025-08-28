#include<bits/stdc++.h>
using namespace std;
int n;
int sx,sy;
int tx,ty;
char Map[1100][1100];
bool done[1100][1100];
int xy[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
struct point{
	int x,y,num;
};
queue<point> vva;
int bfs(int sx,int sy,int tx,int ty){
	point pnt;
	pnt.x=sx;
	pnt.y=sy;
	pnt.num=0;
    vva.push(pnt);
    done[sx][sy]=1;
    while(!vva.empty()){
    	point p=vva.front();
    	vva.pop();
    	if(p.x==tx&&p.y==ty){
    	
    	    return p.num;
    		break;
		}
		for(int i=0;i<4;i++){
			int fx=p.x+xy[i][0];
			int fy=p.y+xy[i][1];
			if(done[fx][fy]==0&&Map[fx][fy]!='1'&&fx>0&&fy>0&&fx<=n&&fy<=n){
				point pnt2;
			pnt2.x=fx;
			pnt2.y=fy;
			pnt2.num=p.num+1;
			vva.push(pnt2);
		    done[fx][fy]=1;
			}
				}
}
return 0;
} 
//3 001 101 100 1 1 3 3
int main(){

	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>Map[i][j];
		}
	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<Map[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	
	cin>>sx>>sy>>tx>>ty;
//	cout<<sx<<" "<<sy<<" "<<tx<<" "<<ty<<endl;
	cout<<bfs(sx,sy,tx,ty);
} 
