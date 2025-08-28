#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,max,min,z;
	cin>>a>>b>>c;
	if(a>b&&a>c){
		max=a;
	}
	if(b>a&&b>c){
		max=b;
	}
	if(c>a&&c>b){
		max=c;
	}
	if(a<b&&a<c){
		min=a;
	}
	if(b<a&&b<c){
		min=b;
	}
	if(c<a&&c<b){
		min=c;
	}
	z=a+b+c-max-min;
	cout<<max<<" "<<z<<" "<<min;
} 
