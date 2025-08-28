#include<bits/stdc++.h>
using namespace std;
char mapp[110][110];
bool done[110][110];
int xy[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int ans;
bool ok=0;
	int m,n;
struct point{
	int x,y,num;
};
queue<point> vva;
void bfs(int sx,int sy){
	point pnt;
	pnt.x=sx;
	pnt.y=sy;
	pnt.num=0;
    vva.push(pnt);
    done[sx][sy]=1;
    while(!vva.empty()){
    	point p=vva.front();
    	vva.pop();
    	if(mapp[p.x][p.y]=='T'){
    		ans=p.num;
    		ok=1;
    		break;
		}
		for(int i=0;i<4;i++){
			int tx=p.x+xy[i][0];
			int ty=p.y+xy[i][1];
			if(done[tx][ty]==0&&mapp[tx][ty]!='#'&&tx>=0&&ty>=0&&tx<n&&ty<m){
				point pnt2;
			pnt2.x=tx;
			pnt2.y=ty;
			pnt2.num=p.num+1;
			vva.push(pnt2);
		    done[tx][ty]=1;
			}
				}
}} 
int main(){

	int sx,sy;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mapp[i][j];
			if(mapp[i][j]=='S'){
				sx=i;
				sy=j;
			}
		}
	}
	bfs(sx,sy);
	if(!ok){
		cout<<"-1"<<endl;
	}
	else{
		cout<<ans;
	}
	
}
