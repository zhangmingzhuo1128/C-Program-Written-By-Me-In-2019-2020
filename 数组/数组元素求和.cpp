#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[2929],n,k,i,j,sum=0; 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	for(int c=1;c<=k;c++){
        cin>>i>>j;
		for(int b;b<=j;b++)
		sum+=a[i-1];
		cout<<sum<<endl;
	}

}
