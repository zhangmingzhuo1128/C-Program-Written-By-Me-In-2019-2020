#include<bits/stdc++.h>
using namespace std;
struct conference{
	int Time;
	int Start;
	int End;
}a[1000005];
bool cmp(conference m,conference n){
	return m.Time>n.Time; 
}
int main(){
	int k;
	cin>>k;
	for(int i=1;i<=k;i++){
		int S,E;
		cin>>S>>E;
		a[i].Start=S;
		a[i].End=E;
		a[i].Time =E-S;
	}
	
} 
