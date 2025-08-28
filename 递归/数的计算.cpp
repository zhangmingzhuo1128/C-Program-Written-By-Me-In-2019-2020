#include<bits/stdc++.h>
using namespace std;
int jisuan(int x){
	if(x==1){
		return 1;
	}
	else{
		int ans=1;
		for(int i=x/2;i>=1;i--){
			ans+=jisuan(i);
		}
		return ans;
	}
	
}
int main(){
	int n;
	cin>>n;
	cout<<jisuan(n);
}
