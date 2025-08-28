#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i=2;
	cin>>n;
	cout<<n<<"=";
	do{
		while(n%i==0){
			n=n/i;
			if(n>1){
				cout<<i<<"*";
				
			}
			else{
				cout<<i;
			}
		}
		i++;
	}while(n>1);
		
}
