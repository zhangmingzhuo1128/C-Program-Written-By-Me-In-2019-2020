#include<bits/stdc++.h>
using namespace std;
int main(){
	bool sushu(int x);
	int n,A=0;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(sushu(i)==true){
			A++;
			
		}
	}
	cout<<A;
}
bool sushu(int x){
	if(x<2)return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return false;
		}
	}
	return true;	
}
