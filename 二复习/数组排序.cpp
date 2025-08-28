#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100];
	for(int i=1;i<=20;i++){
		cin>>a[i];
	}
	for(int i=1;i<=20;i++){
		for(int j=1;j<=20-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=1;i<=20;i=i+2){
		if(i<19){
			cout<<a[i]<<" ";
		}
		else if(i==19){
			cout<<a[i];
		}
	}
}
