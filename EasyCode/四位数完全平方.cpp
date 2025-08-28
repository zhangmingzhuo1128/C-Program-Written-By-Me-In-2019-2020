#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int i=36;i<100;i++){
		int n=i*i;
		int a=n%10;
		int b=n%100/10;
		int c=n/100%10;
		int d=n/10/10/10%10;
	if(a==b&&c==d){
		cout<<n;
	}
	}
	
} 
