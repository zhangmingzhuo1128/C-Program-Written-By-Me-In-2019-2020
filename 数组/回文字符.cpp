#include<bits/stdc++.h> 
using namespace std;
int main(){
	int left=0,right;
	string str;
	getline(cin,str);
	right=str.size()-1;
	while((left<right)&&(str[left]==str[right])){
		--right;
		++left;
		
	}
	if(left>=right){
		cout<<"YES";
		
	}
	else{
		cout<<"NO"; 
	}
}
