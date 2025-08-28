#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int m=100;m<=999;m++){
		int A=m/100;
		int B=(m%100)/10;
		int C=m%10;
		if(A*A*A+B*B*B+C*C*C==m){
		cout<<m<<" ";
		}
	}
}
