#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	double sum=0.0;
	cin>>m>>n;
	for(m;m<=n;m++){
		double a=1.0/m;
		sum+=a*a;
		
	}
	printf("%.5lf",sum);
}
