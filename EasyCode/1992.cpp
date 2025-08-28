	#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=1,b,t=0;
	do{
		++t;
		a=(a*92)%100;
	} 
	while(t!=1992);
	cout<<a;
		}
