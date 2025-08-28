#include<bits/stdc++.h>
using namespace std;
void zyz(int n,int p){
	if(n==1){
		return;
	}
	if(n>1){
			if(n%p==0){
				cout<<p<<" ";
				zyz(n/p,p);
			}
			if(n%p!=0){
				zyz(n,p+1);
			}
		}
	}
int main(){
	int m;
	cin>>m;
	zyz(m,2);
	return 0;
}
