#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[1796],n,x,j=0; 
	for(int i=0;i<20;i++){
		cin>>a[i];
	}
		for(int i=1;i<=19;i++){
		for(int j=0;j<19;j++){
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<20;i++){
		if(i%2==0&&i<18)cout<<a[i]<<" ";
		if(i==18)cout<<a[i]; 
		
	}
}

