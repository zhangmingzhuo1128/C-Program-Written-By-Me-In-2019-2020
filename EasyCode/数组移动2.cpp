#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[1796],n,x; 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>x;
	for(int i=0;i<x;i++)
	cout<<a[n+i-x]<<" ";
	for(int i=0;i<=n-1-x;i++){
		if(i<n-1-x)cout<<a[i]<<" ";
		if(i==n-1-x)cout<<a[i];
	}
} 
