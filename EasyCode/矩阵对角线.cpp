#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100][100];
	for(int i=0;i<=5;i++){
		for(int j=0;j<=5;j++){
			cin>>a[i][j];
	}
		}
	for(int i=0;i<=5;i++){
		for(int j=0;j<=5;j++){
			if(i==j||i+j==5)
			a[i][j]=a[i][j]+10;
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}	
		
		
		
		
	}
