#include<bits/stdc++.h>
using namespace std;
int num(int n,int k){
	int s=1;
	if((n-k)<2){
		return s;
	}
	else if((n-k)%2==1){
		return s;
	}
	else if((n-k)%2==0){
		s=num((n-k)/2,k)+num((n-k)/2+k,k);
	} 
	
}
int main(){
	int n,k,s;
	cin>>n>>k;
	s=num(n,k);
	cout<<s; 
}

