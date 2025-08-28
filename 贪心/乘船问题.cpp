#include<bits/stdc++.h>
using namespace std;
struct person{
	int weight;
}a[305];

bool cmp(person m,person n){
	return m.weight>n.weight;//从大到小 
}
int main(){
	int s;
	cin>>s;
	for(int m=1;m<=s;m++){
		int w,n;
		cin>>w>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i].weight;
		}
		sort(a+1,a+n+1,cmp);//排序 
		int sum=0,nn=n; // 
			for(int j=1;j<=nn;j++){
				if(j==nn){
					sum++;
					break;
				}
				if(a[j].weight+a[nn].weight<=w){
					sum++;
					nn--;
					continue;
				}
				if(a[j].weight+a[nn].weight>w){
					sum++;
				}
			}
		
	
		cout<<sum<<endl;
	}
}
