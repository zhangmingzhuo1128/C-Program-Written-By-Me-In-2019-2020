#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum=sum+(double)1/i;
	}
	printf("%.3lf",sum);
}
