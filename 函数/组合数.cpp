#include<bits/stdc++.h>
using namespace std;
long long jiecheng(int n){
	long long s=1;
	for(int i=1;i<=n;i++){
		s=s*i;
	}
	return s;
} 
int main(){
	int n,m;
	long long A; 
	cin>>n>>m;
	A=jiecheng(n)/(jiecheng(m)*jiecheng(n-m));
	cout<<A;
	
}
