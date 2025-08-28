#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[1796],n,x,j=0; 
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	cin>>x;
	for(int i=0;i<10;i++){
		if(x+30>=a[i])
		j++; 
		
	}
	cout<<j;
	
}
