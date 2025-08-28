#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,A,L;
	char c;
	cin>>a>>b>>c;
	if(c=='+'){
		L=a+b;
	}
		if(c=='-'){
		L=a-b;
	}
	if(c=='*'){
		L=a*b;
	}
	if(c=='/'){
		L=a/b;
	}
	printf("%.2lf",L);
	
	}
