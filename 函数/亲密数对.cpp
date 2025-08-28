#include<bits/stdc++.h>
using namespace std;
int he(int n){
	int s=0;
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			if(i*j==n){
				s=s+i+j;
			}
		}
	}
	return s;
}
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(he(i)==he(j)){
				cout<<i<<" "<<j<<endl;
			}
		}
	}
}
