#include<bits/stdc++.h>
using namespace std;
long long n,m;//5 3 1 3 6 1 7
long long tree[100005];
long long AAAA[100005];

int pick(long long v){
	int num=1;
	long long  =v;
	for(int i=1;i<=n;i++){
		if(vtem-tree[i]>=0){
			vtem=vtem-tree[i];
			
		}
		else{
			vtem=v-tree[i];
			num++;
		}
	}
	return num;
	
}
int main(){
	long long all=0;
	//cin>>n>>m;//
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		//cin>>tree[i];//
		scanf("%lld",&tree[i]);
		AAAA[i]=tree[i];
		//if(tree[i]>maxx){
			//maxx=tree[i];
	//	}
		all+=tree[i]; 
}
    sort(AAAA+1,AAAA+n-1);
	long long  l=AAAA[n],r=all;
	while(l<r){
		long long mid=(l+r)/2;
		if(pick(mid)<=m){
			r=mid;
		}
		else{
		    l=mid+1;
		}
	}
	//cout<<l;	//
	printf("%lld",r);
} 
