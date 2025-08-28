#include<bits/stdc++.h>
using namespace std;
int a[16],n;
void print(int n){
	bool first=true;
	int num=n;
	for(int i=15;i>=0;i--){
		if(a[i]<=num){
			if(!first){
				cout<<"+";
			}
			else
			first=false;
			if(i==1)
			cout<<"2";
			else if(i==0)
			cout<<"2(0)";
			else{
				cout<<"2(";
				print(i);
				cout<<")";
			}
			num-=a[i];
		}
	}
}
int main(){
	a[0]=1;
	for(int i=1;i<16;i++){
		a[i]=a[i-1]*2;
	}
	cin>>n;
	print(n);
	return 0;
}
