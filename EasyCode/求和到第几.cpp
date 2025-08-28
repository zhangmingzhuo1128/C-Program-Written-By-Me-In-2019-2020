#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=1;
    double s=0;
	while(s<5){
		s+=(1/n+1%n);
		n+=1;
	}
    cout<<n;
	}
