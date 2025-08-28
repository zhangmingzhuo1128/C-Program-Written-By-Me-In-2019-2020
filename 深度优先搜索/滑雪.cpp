#include<bits/stdc++.h>
using namespace std;

int R,C;
int diss[101][101];//记录该点的最大值 
int MAP[101][101];//地图 
int xy[4][2]={{1,0},{-1,0},{0,-1},{0,1}};

int dfs(int x,int y){
	if(diss[x][y]!=0){
		return diss[x][y];
	} 
	
}

int main(){
	while(cin>>R>>C){
		memset(diss,0,sizeof(diss));
		memset(MAP,0,sizeof(MAP));
		for(int i=1;i<=R;i++){
			for(int j=1;j<=C;j++){
				cin>>MAP[i][j];
				}
		}	
			int ans=0;
			for(int i=1;i<=R;i++){
				for(int j=1;j<=C;j++){
					ans=max(dfs(i,j),ans);
					cout<<ans<<endl;
				}
			}
	
		
	}
} 
