#include<bits/stdc++.h>
using namespace std;
void trans(int x){
	if(x<8){
		cout<<x;
	}
	else {
		int t=x%8;
		trans(x/8);
		cout<<t;
	}
} 
int main(){
	int n;
	cin>>n;
	trans(n);
}
