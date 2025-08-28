#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main(){
	float a,b,c,p,A,B,C,s;
	cin>>a>>b>>c; 
	p=(a+b+c)/2;
	A=p-a;
	B=p-b;
	C=p-c;
	s=sqrt(p*A*B*C);
	printf("%.3",s);
}

