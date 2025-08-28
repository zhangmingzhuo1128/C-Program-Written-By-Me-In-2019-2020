#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a,b;
		for(a=100;a<=200;++a){
			for(b=2;b<=a;++b){
				if(a%b==0)
				break;
				}
			if(b>=a){
			cout<<a<<" ";
		}
		}
	return 0;
}
