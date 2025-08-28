#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int a=m;
	while(m%a!=0||n%a!=0){
		a--;
	}
	cout<<a;
}
