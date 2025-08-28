#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<n<<"=";
	int i=2;
	do{
		while(n%i==0)
		{
			n=n/i;
			if(n>1){
		cout<<i<<"*";
		}
			else{
			cout<<i;
		}
		
	}		i++;
}while(n>1);
} 
