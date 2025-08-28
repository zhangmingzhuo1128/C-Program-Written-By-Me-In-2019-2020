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
		while(y>=1&&a[x][y-1]==0)
	}
}
