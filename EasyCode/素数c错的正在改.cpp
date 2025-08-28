#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int a=100;a<=110;a++){
		for(int b=2;b<=a;b++){
			cout<<a<<" "<<b<<endl;
		  	if(a%b==0){
		  		cout<<a<<
		  		break;
			  }
		    	
			if(b>=a)
		    	cout<<b<<" ";
		}
	}
	return 0;
}
