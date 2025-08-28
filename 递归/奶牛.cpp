#include<bits/stdc++.h>
using namespace std;
int zu(int n,int k){
	if(n<=k){
		return 1;
	}
	if((n-k)%2==0&&n>k){
		return zu((n-k)/2,k)+zu((n+k)/2,k);
	} 
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<zu(n,k);
}
