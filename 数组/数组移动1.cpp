#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[1796],n; 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<a[n-1]<<" ";
	for(int i=0;i<n-1;i++){
		if(i<n-2)cout<<a[i]<<" ";
		if(i==n-2)cout<<a[i];
	}
} 
