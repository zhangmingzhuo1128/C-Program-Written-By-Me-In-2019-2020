#include<bits/stdc++.h>
using namespace std;
long long jc(int n){
	if(n==0||n==1){
		return 1;
	}
	if(n>=2){
		return n*jc(n-1);
	}
} 
int main(){
	int n;
	cin>>n;
	cout<<jc(n);
}
