#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,y,tot;
	int a[8][8];
	memset(a,0,sizeof(a));
	cin>>n;
	x=0;
	y=n-1;
	a[x][y]=1;
	tot=1;
	while(tot<n*n){
		while(x<n-1&&a[x+1][y]==0) a[++x][y]=++tot;
		while(y>=1&&a[x][y-1]==0) a[x][--y]=++tot;
		while(x>=1&&a[x-1][y]==0) a[--x][y]=++tot;
		while(y<n-1&&a[x][y+1]==0) a[x][++y]=++tot;
		 
	}
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=n-1;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
