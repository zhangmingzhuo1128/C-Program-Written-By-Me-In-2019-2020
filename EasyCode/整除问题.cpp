#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,sum=0;
	cin>>x;
	for(int i=1;i<=x;i++){
		if(i%3==0&&i%5==0){
			sum+=i;
		}
		
	}
	
	cout<<sum;
}
