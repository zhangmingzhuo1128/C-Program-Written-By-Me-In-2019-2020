#include<bits/stdc++.h>
using namespace std;
int row[8],col[8],RIGHT[15],LEFT[15];
char MAP[8][8];
void dfs(int index){
	if(index>=8){
		for(int i=0;i<=7;i++){
			for(int j=0;j<=7;j++){
				if(MAP[i][j]){
					cout<<"Q";
				}
				else cout <<".";
			}
			cout<<endl;
		}
	}
	else{
		if(row[index]){
			dfs(index+1);
		}
		else{
			for(int i=0;i<=7;i++){
				if(!col[i]&&!RIGHT[index+i]&&!LEFT[index-i+7]){
					col[i]=1;
					RIGHT[index+i]=1;
					LEFT[index-i+7]=1;
					MAP[index][i]=1;
					dfs(index+1);
					col[i]=0;
					RIGHT[index+i]=0;
					LEFT[index-i+7]=0; 
					MAP[index][i]=0;
			}
		}
	}
}} 
int main(){
	int n;
	cin>>n;
	while(n--){
		int x,y;
		cin>>x>>y;
		MAP[x][y]=1;
		col[y]=1;
		row[x]=1;
		RIGHT[x+y]=1;
		LEFT[x-y+7]=1; 
	}
	dfs(0);
	return 0;
}
