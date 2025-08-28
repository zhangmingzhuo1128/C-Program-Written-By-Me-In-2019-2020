#include<bits/stdc++.h>
using namespace std;
int s(int&a,int&b){
	int c=a;
	a=b,b=c;
}
int main(){
	int c,d;
	cin>>c>>d;
	s(c,d);
	cout<<c<<" "<<d;
}
