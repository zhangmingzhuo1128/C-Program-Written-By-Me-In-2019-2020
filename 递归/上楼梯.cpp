#include<bits/stdc++.h>
using namespace std;
int fa(int n){
	if(n==1){
		return 1;
	}
	if(n==2){
		return 2;
	}
	return fa(n-1)+fa(n-2);
}
int main(){
	int n;
	cin>>n;
	cout<<fa(n);
}
