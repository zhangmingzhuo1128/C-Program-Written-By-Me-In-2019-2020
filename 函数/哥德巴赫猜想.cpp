#include<bits/stdc++.h>
using namespace std;
bool sushu(int x){
	if(x<2)return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;	
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n-2;i++){
		if(sushu(i)==true&&sushu(n-i)==true){
			cout<<n<<" "<<"="<<" "<<i<<" "<<"+"<<" "<<n-i;
			break;
			
		}
	}
}
