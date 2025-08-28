#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int i=100;i<=200;i++){
		bool prime=true;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				prime=false;
			}
		}
		if(prime==true){
			cout<<i<<" "; 
		}
	}
}
