#include<bits/stdc++.h>
using namespace std;
int main(){
	long long  a,b,p;
	cin>>a>>b>>p;
	long long ans=1;
	while(b!=0){
		if(b%2==1){
			ans=ans*a%p;
		}
		b=b/2;
		a=a*a%p;
	}
	cout<<ans%p;
} 
