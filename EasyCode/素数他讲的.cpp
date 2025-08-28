#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int j=100;j<=200;j++){
		bool isprime=true;
		for(int i=2;i<j;i++){
			if(j%i==0){
				isprime=false;	
		}
	}
	if(isprime==true){
		cout<<j<<" ";
	}
	}
	
} 
