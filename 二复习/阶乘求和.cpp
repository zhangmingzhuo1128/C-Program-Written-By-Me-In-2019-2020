#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long s=0;
	for(int i=1;i<=n;i++){
		long long a=1;
		for(int j=1;j<=i;j++){
			a=a*i;
		}
		s=s+a;
	}
	cout<<s; 
}
