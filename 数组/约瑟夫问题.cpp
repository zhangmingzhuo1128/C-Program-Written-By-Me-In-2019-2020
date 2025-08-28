#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[10005]; 
	memset(a,0,sizeof(a));
	int left=n;
	int i=1;
	int num=0;
	while(left>1){
		if(a[i]==0){
			num++;
			if(num==m){
				a[i]=1;
				left--;
				num=0;
			}
		}
		i++;
		if(i>n){
			i=1;
		}
	}
	for(int j=1;j<=n;j++){
		if(a[j]==0){
			cout<<j;
		}
	}
	}
