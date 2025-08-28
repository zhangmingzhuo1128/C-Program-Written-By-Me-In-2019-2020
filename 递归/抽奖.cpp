#include<bits/stdc++.h>
using namespace std;
int find(int a[],int low,int high,int num){
	if(low>high){return -1;
		
	}
	int mid=(high+low)/2;
	if(a[mid]==num){
		return mid;
	}
	else if(a[mid]>=num){
		return find(a,low,mid-1,num);
	}
	else{
		return find(a,mid+1,high,num);
	}
	
}
int main(){
	int n;
	int a[10000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int win;
	cin>>win;
	cout<<find(a,0,n-1,win)+1;
	
}
