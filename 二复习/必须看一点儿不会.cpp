#include<bits/stdc++.h>
using namespace std;
int main(){
	string str[100];
	int cnt=0;
	while(getline(cin,str[cnt])){
		cnt++;
	}
	cout<<str[1]+str[0]<<endl;
	for(int i=2;i<cnt;i++){
		cout<<str[i][str[i].size()-1];
	}
	cout<<endl;
	cout<<cnt;
}
