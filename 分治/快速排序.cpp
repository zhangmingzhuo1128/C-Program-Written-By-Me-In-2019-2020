#include<bits/stdc++.h>
using namespace std;
int sum=0;

long long def=1e10;
struct card{
	char color;
	int num;
}a[100005],b[100005],s[500005],l[500005],r[500005];

int partation(card a[],int x,int y){
	int value=a[y].num;
	int i=x-1;
	for(int j=x;j<=y-1;j++){
		if(a[j].num<value){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[y]);
	return i+1;
}

void quicksort(card a[],int x,int y){
	if(x<y){
		int p=partation(a,x,y);
		quicksort(a,x,p-1);
		quicksort(a,p+1,y);
	}
	
}
void merge(card a[],int left,int mid,int right){
	int n1=mid-left,n2=right-mid;
	for(int i=0;i<n1;i++){
		l[i]=s[left+i];
	}
	for(int i=0;i<n2;i++){
		r[i]=s[mid+i];
	}
	
	l[n1].num=r[n2].num=def;
	int i=0,j=0;
	for(int k=left;k<right;k++){
		if(l[i].num<=r[j].num){
		s[k]=l[i];
		i++;
		
	}
	else{
		s[k]=r[j];
		j++;
	
	}
	}
}
void merge_sort(card a[],int left,int right){
	if(left+1<right){
		int mid=(left+right)/2;
	    merge_sort(a,left,mid);
	    merge_sort(a,mid,right);
	    merge(a,left,mid,right);
	}
}


int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].color>>a[i].num;
		b[i].color=a[i].color;
		b[i].num=a[i].num;
		
	}
	quicksort(b,1,n);
	merge_sort(a,1,n+1);
	
	bool isstable=true;
	for(int i=1;i<=n;i++){
		if(a[i].color!=b[i].color){
			isstable=false;
			break;
		}
		
	}
	if(isstable==true){
		cout<<"Stable"<<endl;
	}
	else{
		cout<<"Not stable"<<endl; 
	}
	for(int i=1;i<=n;i++){
		cout<<b[i].color<<" "<<b[i].num<<endl;
	}
} 
