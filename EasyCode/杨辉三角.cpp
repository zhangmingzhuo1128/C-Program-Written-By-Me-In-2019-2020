#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[11][11];
	memset(a,0,sizeof(a));
	a[1][1]=1;
	for(int i=2;i<=10;i++){
		a[i][1]=1;a[i][i]=1;
		for(int j=2;j<=i-1;j++){
		a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(int i=1;i<=10;i++){
		for(int j=1;j<=30-3*i;j++){
			cout<<" ";
		}
		for(int k=1;k<=i;k++){
			printf("%6d",a[i][k]);
		}
		cout<<endl;
	}
}
