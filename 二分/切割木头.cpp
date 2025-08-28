#include<bits/stdc++.h>
using namespace std;
int a[100005];
	int N,K;
int check(int x){
	int sum=0;
	for(int i=1;i<=N;i++){
		sum+=a[i]/x;
	}
	return sum;
}
int main(){
//3 7 232 124 456
	cin>>N>>K;
	int sumlength=0;
	for(int i=1;i<=N;i++){
		scanf("%d",&a[i]);
		sumlength+=a[i];
	} 
	
	int l=0,r=sumlength/K;
	while(l<r){
		int mid=(l+r+1)/2;//不+1也对 好像必须+1 
		
		if(check(mid)<K){
			r=mid-1;
		}
		else{
			l=mid;
		}
	
	}
	cout<<l<<endl; 
} 

