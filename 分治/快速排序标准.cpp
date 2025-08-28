#include<bits/stdc++.h>
using namespace std;

#define MAX 1000000001;
struct card{
	char suit;
	int value;
}; 

int partition(struct card A[],int p,int r){
	int x=A[r].value;
	int i=p-1;
	for(int j=i+1;j<r;j++){
		if(A[j].value<=x){
			i++;
			swap(A[i],A[j]);
			
		}
	}
	swap(A[i+1],A[r]);
	return i+1;
}

void quicksort(struct card A[],int p,int r){
	if(p<r){
		int q=partition(A,p,r);
		quicksort(A,p,q-1);
		quicksort(A,q+1,r);
	}
}

void merge(card A[],int left,int mid,int right){
	int n1=mid-left;
	int n2=right-mid;
	struct card L[n1+1];
	struct card R[n2+1];
	for(int i=0;i<n1;i++) L[i]=A[left+i];
	for(int i=0;i<n2;i++) R[i]=A[mid+i];
	L[n1].value=MAX;
	R[n2].value=MAX;
	
	int li=0;
	int ri=0;
	
	for(int i=left;i<right;i++){
		if(L[li].value<=R[ri].value){
			A[i]=L[li];
			li++;
		}
		else{
			A[i]=R[ri];
			ri++;
		}
	}
}

void mergesort(struct card A[],int left,int right){
	if(left+1<right){
		int mid=(left+right)/2;
		mergesort(A,left,mid);
		mergesort(A,mid,right);
		merge(A,left,mid,right);
	}
}

int main(){
	int n;
	cin>>n;
	struct card A[n],B[n];
	for(int i=0;i<n;i++){
		cin>>A[i].suit>>A[i].value;
		B[i].suit=A[i].suit;
		B[i].value=A[i].value;
		
	}
	quicksort(B,0,n-1);
	mergesort(A,0,n);
	
	bool isstable=true;
	for(int i=0;i<n;i++){
		if(A[i].suit!=B[i].suit){
			isstable=false;
			break;
		}
		
	}
	if(isstable){
		cout<<"Stable"<<endl;
	}
	else{
		cout<<"Not stable"<<endl; 
	}
	for(int i=0;i<n;i++){
		cout<<B[i].suit<<" "<<B[i].value<<endl;//<<" "<<A[i].suit<<" "<<A[i].value
	}
} 







