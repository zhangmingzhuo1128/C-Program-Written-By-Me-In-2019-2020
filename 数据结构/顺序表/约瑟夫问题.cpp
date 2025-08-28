#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> vva;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		vva.push_back(i);
	}
	vector<int>::iterator cur=vva.begin();
	int num=1;
	while (vva.size()>1){
		if(num==m){
			//cout<<"del:"<<*cur<<endl
			vva.erase(cur);
			num=1;
		}
		else{
			cur++;
			num++;
		}
		if(cur==vva.end()){
			cur=vva.begin();
		}
	}
	cout<<vva[0];
}
