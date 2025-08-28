#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	cin>>q;
	vector<int> vec;
	for(int i=1;i<=q;i++){
		int x,y;
		cin>>x;
		if(x==0){
			cin>>y;
			vec.push_back(y);
		}
		else if(x==1){
			cin>>y;
			vector<int>::iterator it;
			it=vec.begin()+y;
			printf("%d\n",*it);
		}
		else{
			vec.pop_back();
		}
	}
}
