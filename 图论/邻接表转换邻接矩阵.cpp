#include<bits/stdc++.h>
using namespace std;
int Image[105][105];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		int d;
		cin>>d;
		for(int j=1;j<=d;j++){
			int Terminal;
			cin>>Terminal;
			Image[a][Terminal]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		    cout<<Image[i][j]<<" ";	
		}
		cout<<endl;
	}
}
