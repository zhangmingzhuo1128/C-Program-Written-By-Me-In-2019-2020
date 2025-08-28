#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int m=1;m<i;m++)
			cout<<" ";	
		for(int k=1;k<=2*n-1-2*(i-1);k++)
		cout<<"#";
		cout<<endl;
	}
}
