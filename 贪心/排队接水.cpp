#include<bits/stdc++.h>
using namespace std;
struct person{
	int tim;
	int no;
}a[1005];
bool cmp(person m,person n){
	return m.tim<n.tim;
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].tim;
		a[i].no=i;
	}
	sort(a+1,a+1+n,cmp);
	int sum=0;
	for(int i=1;i<=n;i++){
		cout<<a[i].no<<" ";
		sum+=a[i].tim*(n-i);
	}
	printf("\n%.2lf",1.0*sum/n);
	
}
