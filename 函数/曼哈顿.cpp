#include<bits/stdc++.h>
using namespace std;
int manhadun(int&a,int&b,int&c,int&d){
	int s=abs(a-c)+abs(d-b);
	return s;
	
}
int main(){
	int x1,x2,y1,y2,s; 
	cin>>x1>>y1>>x2>>y2;
	s=manhadun(x1,y1,x2,y2);
	cout<<s;
}
