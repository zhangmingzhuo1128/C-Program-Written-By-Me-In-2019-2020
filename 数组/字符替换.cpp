#include<bits/stdc++.h> 
using namespace std;
int main(){
	string str0,str1,str2;
	getline(cin,str0);
	getline(cin,str1);
	getline(cin,str2);
	int pos;
	pos=str0.find(str1,pos);
	while(pos!=-1){
		 str0.replace(pos,str1.length(),str2);
		 pos=str0.find(str1,pos);
	}
	cout<<str0<<endl;
} 
