#include<bits/stdc++.h>
using namespace std;
int main(){
	double x1,x2;
	int a=1,b=3,c=2;
	double D=sqrt(b*b-4*a*c);
	x1=(-b+D)/(2*a);
	x2=(-b-D)/(2*a);
	cout<<"x1=";
	printf("%0.3f",x1);
	cout<<" "<<"x2=";
	printf("%0.3f",x2);
}
