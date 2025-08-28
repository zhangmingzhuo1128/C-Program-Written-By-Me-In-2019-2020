#include<bits/stdc++.h>
using namespace std;
struct metal{
	int weight;
	int value;
	double unitvalue;
};
metal a[105];
bool cmp(metal m,metal n){
	return m.unitvalue>n.unitvalue;
}
int main(){
	int k;
	cin>>k;
	for(int i=1;i<=k;i++){
		int w,s;
	cin>>w>>s;
	for(int j=1;j<=s;j++){
		cin>>a[j].weight>>a[j].value;
		a[j].unitvalue=1.0*a[j].value/a[j].weight;
	}
	sort(a+1,a+1+s,cmp); 
	int remain=w;
	double maxvalue=0;
	for(int j=1;j<=s;j++){
		if(a[j].weight<=remain){
			remain-=a[j].weight;
			maxvalue+=a[j].unitvalue*a[j].weight;
		}
		else{
			maxvalue+=remain*a[j].unitvalue;
			break;
		}
	}
	printf("%.2lf\n",maxvalue);
	}
	
}
