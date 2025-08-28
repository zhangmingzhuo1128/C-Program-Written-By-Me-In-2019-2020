#include<bits/stdc++.h>
using namespace std;
void dao(int a){
	if(a>0){
	cout<<a%10;
	dao(a/10);
}
}
int main(){
	int n;
	cin>>n;
	dao(n);
}
