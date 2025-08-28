#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[20000],b[10000];
	int n,p,q,x=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int k;
	cin>>k;
	for(int i=1;i<=k;i++){
		cin>>p>>q;
		while(p<=q){
			b[x]=b[x]+a[p];
			p++;
		}
		x++;
		cout<<b[i]<<endl;
	}
	
	}

