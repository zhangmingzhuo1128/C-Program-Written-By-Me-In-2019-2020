#include<bits/stdc++.h>
using namespace std;
struct VVA{
	int st;
	int en;
	bool done=false;
};
VVA vva[1000005];
bool cmp(VVA a,VVA b){
	return a.st<b.st;
}
int main(){
	int k;
	cin>>k;
	for(int i=1;i<=k;i++){
		cin>>vva[i].st>>vva[i].en;
	}
	sort(vva+1,vva+1+k,cmp);
	int sum=0;
	
	for(int i=1;i<=k;i++){
		if(vva[i].done==false){
			vva[i].done=1;
			int endtime=vva[i].en;
			for(int j=i+1;j<=k;j++){
				if(vva[j].st>=endtime&&vva[j].done==false){
					endtime=vva[j].en;
					vva[j].done=1;
				}
			}
			sum++;
		}
	
	}
	cout<<sum;
}
