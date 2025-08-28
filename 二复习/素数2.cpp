#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int cnt=0;
	for(int i=2;i<=n;i++){
		bool prime=true; 
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				prime=false;
			}
		}
		if(prime==true){
			cnt++;
			cout<<i<<" ";
			if(cnt%10==0){
				cout<<endl;
			}
		}
	}
} 
