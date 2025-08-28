#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[1796],n,x; 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(i<n-1)cout<<a[i]<<" ";
		if(i==n-1)cout<<a[i];
	}
	
	
	
	} 
