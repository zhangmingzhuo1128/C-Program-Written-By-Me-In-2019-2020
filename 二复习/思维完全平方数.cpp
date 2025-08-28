#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int i=31;i<100;i++){
		int s=i*i;
		int a,b,c,d;
		a=s/1000;
		b=s/100%10;
		c=s%100/10;
		d=s%10;
		if(a==b&&c==d){
			cout<<i*i<<" ";
		}
	}
}
