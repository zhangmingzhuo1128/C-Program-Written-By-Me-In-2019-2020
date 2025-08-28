#include<bits/stdc++.h>
using namespace std;
int n,m;
int A[21];
bool f=false;
int ans=-99999999;
void violent(int sum,int step,int m){
	if(sum==m){	
	//if(ans==m){
		f=true;
		return;
	}
	if(step==n){
		return;
	}
	
	if(sum>m){
		return;
	}	
	//ans=max(sum,ans);
	
	violent(sum+A[step+1],step+1,m);
	violent(sum,step+1,m);
}
int main(){

	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>A[i];
	}
	int q;
	cin>>q;
	for(int i=1;i<=q;i++){
	
		cin>>m;
		violent(0,0,m);
		if(f==false)
		cout<<"no"<<endl;
		if(f==true){
			printf("yes\n");
			f=false;
		}
		
	}
}

