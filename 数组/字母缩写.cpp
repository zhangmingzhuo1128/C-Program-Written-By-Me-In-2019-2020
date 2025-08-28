#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str;
	getline(cin,str);
	while(n--){
		getline(cin,str);
		for(int i=0;i<str.size();i++){
			if(i==0){
				if(str[i]>='a'&&str[i]<='z'){
					str[i]-=32;
					cout<<str[i];
				}
				else if(str[i]>='A'&&str[i]<='Z'){
					cout<<str[i];
				}
			}
			if(str[i]==' '){
				while(str[i]==' '){
					i++;
				}
				if(str[i]>='a'&&str[i]<='z'){
					str[i]-=32;
					cout<<str[i];
					
				}
				else if(str[i]>='A'&&str[i]<='Z'){
					cout<<str[i];
				}
			}
		}
		cout<<endl;
	}
} 
