#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int cnt=0;
	for(int i=m;i<=n;i++){
		bool isprime=true;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				isprime=false;
				break;
			}
		}
		if(isprime==false){
			continue;
		}
		int t=i;
		int r=0;
		while(t!=0){
			r=r*10+t%10;
			t=t/10;
		}
		bool isprime2=true;
		for(int j=2;j<=sqrt(r);j++){
			if(r%j==0){
				isprime2=false;
			}
		}
		if(isprime2==true){
			cout<<i<<" ";
			cnt++;
			if(cnt%10==0){
				cout<<endl;
			}
		}
	}
}
