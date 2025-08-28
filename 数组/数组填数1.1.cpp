#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10][10];
	int s=1,n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=s++; 
		}
	}
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=n-1;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
}
}
