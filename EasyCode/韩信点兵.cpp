#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,x=10;
	cin>>a>>b>>c;
	bool A=false;
	for(;x<=100;x++){
		if(x%3==a&&x%5==b&&x%7==c){
			cout<<x;
			A=true;
			break;
		
			}

		}
		if(A==false)cout<<"no answer";

}
