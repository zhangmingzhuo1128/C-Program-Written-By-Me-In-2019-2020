#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c,A,x1,x2;
	cin>>a>>b>>c;
	A=b*b-4*a*c;
	if(A>=0){
		x1=(-b+sqrt(A))/(2*a);
	    x2=(-b-sqrt(A))/(2*a);
	    printf("%.2lf/n%.2lf",x1,x2);
	}
	else{
		cout<<"no real roots";
	}	
	
	}
