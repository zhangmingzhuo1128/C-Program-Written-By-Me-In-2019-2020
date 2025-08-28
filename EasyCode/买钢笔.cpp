#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,x,y;
	cin>>x;
	c=x/4;
	y=x%4;
	switch(y){
		case 0:a=0;b=0;break;
		case 1:a=0;b=1;c=c-1;break;
		case 2:a=1;b=0;c=c-1;break;
		case 3:a=1;b=1;c=c-2;break;
	}
	cout<<a<<" "<<b<<" "<<c;
	}
