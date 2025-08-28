#include<bits/stdc++.h>
using namespace std;
int shu(int n){
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	else return shu(n-1)+shu(n-2); 
}
int main(){
	int n;
	cin>>n;
	cout<<shu(n);
}
