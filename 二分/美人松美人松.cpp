#include<bits/stdc++.h>
using namespace std;
int a[1000005],b[1005];
int Biggermin(int x,int l,int r){//查找大于x的最小的数
	if(x>a[r]){
		return r+1;
	}

		while(l<r){
		int mid=(l+r)/2;
		if(a[mid]<=x)//a[mid]>=x就错了 
		
		l=mid+1;

	else
		r=mid;
	}
	return l;

}
int Smallermax(int x,int l,int r){//查找小于x的最大的数 
	if(x<a[l]){
		return l-1;
	}
	
		while(l<r){
		int mid=(l+r+1)/2;//+1
		if(a[mid]>=x){
			r=mid-1;
		}
		
		else{
			l=mid;
		}
	}
	return r;

}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;i++){
		scanf("%d",&b[i]);
	}
	for(int i=1;i<=m;i++){
		int cl=Biggermin(b[i],1,n)-Smallermax(b[i],1,n)-1;
	printf("%d ",cl);
	}
} 
