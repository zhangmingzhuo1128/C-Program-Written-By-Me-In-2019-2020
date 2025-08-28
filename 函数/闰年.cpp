#include<bits/stdc++.h>
using namespace std;
bool run(int n){
	if(n%4==0&&n%100!=0)
	return true;
	if(n%400==0)
	return true;
	else{
		return false;
	}
}
int main(){
	int x,y;
	cin>>x>>y;
	int find=0;
	
	for(int i=x;i<=y;i++){
		if(run(i)==true)
		find++;
	}
	cout<<find;

}
