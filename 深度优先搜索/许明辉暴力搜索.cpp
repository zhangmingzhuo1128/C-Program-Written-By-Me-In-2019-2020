#include<bits/stdc++.h>
using namespace std;
int m,n,q;
int a[21];
int solve(int i,int m){
	if(m==0)return 1;
	if(i>=n)return 0;
	int res=solve(i+1,m)||solve(i+1,m-a[i]);
	return res;
}
int main(){
	scanf("%d",&n);
//	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
//		cin>>a[i];
	}
	scanf("%d",&q);
//	cin>>q;
	for(int i=0;i<q;i++){
		scanf("%d",&m);
//		cin>>m;
		if(solve(0,m)){
			printf("yes\n");
//			cout<<"yes"<<endl;
		}
		else{
			printf("no\n");
//			cout<<"no"<<endl;
		}
	}
	
}
