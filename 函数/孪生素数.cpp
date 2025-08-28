#include<bits/stdc++.h>
using namespace std;
bool sushu(int n){
	if(n<2)return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	
	}
	return true;
}
int main(){
	int A[10000];
	int cnt=0;
	long long n;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(sushu(i)==true){
			A[cnt]=i;
			cnt++;
		}
		
	}
	for(int i=0;i<=cnt;i++){
		if(A[i]==A[i+1]-2){
			cout<<A[i]<<" "<<A[i+1]<<endl;
		}
	}
}
