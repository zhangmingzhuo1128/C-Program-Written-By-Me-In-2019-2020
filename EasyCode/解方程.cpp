#include<bits/stdc++.h>
using namespace std;
#define A 1
#define B 3
#define C 2
int main(){
	double d=B*B-4*A*C;
	double x1,x2;	
	x1=(-B+sqrt(d))/(2*A);
	x2=(-B-sqrt(d))/(2*A);
	printf("x1=%.3lf",x1);
	printf(" x2=%.3lf",x2);
	}
