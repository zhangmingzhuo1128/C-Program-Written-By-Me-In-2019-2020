#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int c;
	c=x/4;
	int A=x%4;
	int a,b;
	switch(A){
		case 0:a=0,b=0,c=c;break;
		case 1:a=0,b=1,c=c-1;break;
		case 2:a=1,b=0,c=c-1;break;
		case 3:a=1,b=1,c=c-2;break;
	}
	cout<<a<<" "<<b<<" "<<c;
}
