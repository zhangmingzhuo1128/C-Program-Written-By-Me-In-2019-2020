#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a;
	for(int i=2;i<=a;i++){
		bool found=true;
		for(int j=2;j<i;j++){
			if(i%j==0){
				found=false;
				
			}
		}
		if(found==true){
			cout<<i<<" ";
			b++;
			if(b%10==0)
			cout<<endl;
		}
	}
} 
