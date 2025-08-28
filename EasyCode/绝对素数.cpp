#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int r=0;
	int a=m;
	while(n!=0){
		r=r*10+n%10;
		n=n/10;
	}
	cout<<r;
}
