#include<bits/stdc++.h>
using namespace std;
int main(){
	int S=0;
	for(int i=1;i<=10;i++){
		int s=1;
		for(int j=1;j<=i;j++){
			s=s*j;
		}
		S=S+s;
	}
	cout<<S;
}
