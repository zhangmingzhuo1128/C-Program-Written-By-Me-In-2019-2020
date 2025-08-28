#include<bits/stdc++.h>
using namespace std;
int gys(int a,int b){
	if(b==0){
		return a;
	}
	else{
		return gys(b,a%b);
	}
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gys(a,b);
}
