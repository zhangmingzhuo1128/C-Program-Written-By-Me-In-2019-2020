#include<bits/stdc++.h> 
using namespace std;
int main(){
	string a[105];
	int cnt=0;
	string s;
	while(getline(cin,s)){
		a[cnt]=s;
		cnt++;
	}
	for(int i=0;i<cnt-1;i++){
		for(int j=0;j<cnt-1;j++){
			if(a[j]>a[j+1]){
				string t=a[j];
				a[j]=a[j+1];
				a[j+1]=t; 
			}
		}
	}
	for(int i=0;i<cnt;i++){
		cout<<a[i]<<endl;
	} 
} 
