#include<bits/stdc++.h>
using namespace std;
bool huiwen(int n){
	int s=n,r=0;
	while(s>0){
		r=r*10+s%10;
		s=s/10;
	}
	if(r==n){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int n,A=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(huiwen(i)==true){
			A++;
		}
	}
	cout<<A;
}
