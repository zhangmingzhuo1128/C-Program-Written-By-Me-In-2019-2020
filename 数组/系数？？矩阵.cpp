#include<bits/stdc++.h>
using namespace std;
	int a[1000][1000];
	int b[1000][1000],n,m,k=0;
int main(){

	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
	}
    }
    	for(int i=0;i<n;i++){
		for(int j=0,c=0;j<m;j++){
			++c;
			if(a[i][j]!=0){
				++k;
			b[k][0]=i+1;
			b[k][1]=c;
			b[k][2]=a[i][j];
		}
	}
    }
    	for(int i=1;i<=k;i++){
		for(int j=0;j<3;j++){
			cout<<b[i][j]<<" ";
	        }
	    cout<<endl;
        }	
	} 
