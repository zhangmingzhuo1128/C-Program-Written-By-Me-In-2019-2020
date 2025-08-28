#include<bits/stdc++.h>
using namespace std;
bool oushu(int n){
	if(n%2==0){
		return true;
	}
    else return false; 
}
int main (){
	int n;
	cin>>n;
	while(n!=1){
		switch(oushu(n)){
		
		case(true):n=n/2;cout<<2*n<<"/"<<"2"<<"="<<n<<endl;break;
		case(false):n=n*3+1;cout<<(n-1)/3<<"*"<<"3"<<"+"<<"1"<<"="<<n<<endl;break; 
	}
}
}
