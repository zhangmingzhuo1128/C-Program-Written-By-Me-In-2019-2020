#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3][3],i,j;
	int b[3][3];
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cin>>a[i][j];
			b[i][j]=a[j][i];
		}
		
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
		}
}
