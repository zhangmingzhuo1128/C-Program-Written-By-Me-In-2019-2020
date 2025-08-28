#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c,A,B,C,s,p;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	A=p-a;
	B=p-b;
	C=p-c;
	s=sqrt(p*A*B*C);
	printf("%0.3lf",s);
}
