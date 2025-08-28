#include<bits/stdc++.h>
using namespace std;
char print(int n,char ch){
	for(int i=1;i<=n;i++){
		cout<<ch;
		
	}

}
int main(){
	int n;
	char ch;
	cin>>n>>ch;
	for(int i=1;i<=n;i++){
		printf("%",print(i,ch));
			cout<<endl; 
	}
}
