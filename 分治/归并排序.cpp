#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
int s[500005];
int l[500005];//临时左边数组
int r[500005];//临时右边数组 
long long def=1e10;

void merge(int left,int mid,int right){
	int n1=mid-left+1,n2=right-mid;
	for(int i=0;i<n1;i++){
		l[i]=s[left+i];
	}
	for(int i=0;i<n2;i++){
		r[i]=s[mid+1+i];
	}
	
	l[n1]=r[n2]=def;
	int i=0,j=0;
	for(int k=left;k<=right;k++){
		if(l[i]<=r[j]){
		s[k]=l[i];
		i++;
		sum++;
	}
	else{
		s[k]=r[j];
		j++;
		sum++;
	}
	}
}
void merge_sort(int left,int right){
	if(left+1<=right){
		int mid=(left+right)/2;
	    merge_sort(left,mid);
	    merge_sort(mid+1,right);
	    merge(left,mid,right);
	}
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){//i=0 i<n
		cin>>s[i];
	}
	int left=1,right=n;//0   n-1
	merge_sort(left,right);
	for(int i=1;i<=n;i++){
		cout<<s[i]<<" ";
	}
	cout<<endl<<sum;
} 
