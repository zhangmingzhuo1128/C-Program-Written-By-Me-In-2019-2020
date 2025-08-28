#include<bits/stdc++.h>
using namespace std;
int main(){
    long int m,n,a,b,c;
	cin>>m>>n;
	c=m;
	a=m%c;
	b=n%c;
	while(a!=0||b!=0){
		c=c-1;
	    a=m%c;
	    b=n%c;
	}
    cout<<c;
	}
