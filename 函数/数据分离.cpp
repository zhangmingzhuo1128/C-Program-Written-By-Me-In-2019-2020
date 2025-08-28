#include<bits/stdc++.h>
using namespace std;
int digit(long long n,int k){
	for(int i=1;i<k;i++){
	
		n=n/10;
}
	int d=n%10;
	return d;

}
int main(){
	long long n;
	int k;
	
	cin>>n>>k;

	cout<<digit(n,k)<<endl;
	
	
}
