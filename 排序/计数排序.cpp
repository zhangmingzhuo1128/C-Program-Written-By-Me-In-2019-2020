#include<bits/stdc++.h>
using namespace std;
int a[2000005];
int bucket[10005]; 
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		bucket[a[i]]++;
	}

	for(int i=0;i<10000;i++){
		while(bucket[i]>0){
			bucket[i]--;
			cout<<i<<" ";
		}
		}
	
}
