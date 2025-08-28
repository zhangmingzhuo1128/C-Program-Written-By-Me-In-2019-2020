#include<bits/stdc++.h>
using namespace std;
struct tim{
	int h;
	int m;
	int s;
}; 
tim a[100];
int n;
int main(){
	cin>>n;
	int H=0,M=0,S=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].h>>a[i].m>>a[i].s;
		H=H+a[i].h,M=M+a[i].m,S=a[i].s+S;
	}
	M=M+S/60;
	H=H+M/60;
	S=S%60;
	M=M%60;
	cout<<H<<"hour"<<" "<<M<<"minute"<<" "<<S<<"secon";
}
