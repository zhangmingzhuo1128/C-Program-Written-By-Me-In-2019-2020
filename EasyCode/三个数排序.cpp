#include<bits/stdc++.h>
using namespace std;
int main(){
	float Q,A,X1,X2,X3,X4;
	X1=1;
	X2=0.9;
	X3=0.7;
	X4=0.5;
	cin>>Q;	
	if(Q<300){
		A=Q*X1;
		printf("%.2f %.2f",X1,A);
	}
	else if(Q<500){
		A=Q*X2;
		printf("%.2f %.2f",X2,A);
	}	
	else if(Q<800){
		A=Q*X3;
		printf("%.2f %.2f",X3,A);
	}
	else{
		A=Q*X4;
		printf("%.2f %.2f",X4,A);
	}
	}
