#include<bits/stdc++.h>
using namespace std;
int main(){
	double pi=0,b=1,c=1;
	int a=1;
	while((fabs(c))>=1e-6){
		pi+=c;
		b+=2;
		a=-a;
		c=a/b;
	}
	pi=pi*4+0.000004;
	printf("%.6lf",pi);
	return 0;
} 
