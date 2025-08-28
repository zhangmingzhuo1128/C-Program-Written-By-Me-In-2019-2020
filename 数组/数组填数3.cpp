#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[11][11];
	memset(a,0,sizeof(a));
	int n;
	cin>>n;
	int x=0,y=0;
	a[x][y]=1;
	int tot=1;
	while(tot<n*n){
		while(y<=n-1&&a[x][y+1]==0) a[x][y++]=tot++;
		x=x+1;
		tot--;
		while(y>=0&&a[x][y-1]==0) a[x][y--]=tot++;
		x=x+1;
		tot--;
	
		
	}
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=n-1;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
}
}
