#include<bits/stdc++.h>
using namespace std;
struct weizhi{
	int s;
	int x;
	int l;
	int r;
	int h=s-x;
	int w=r-l;
}; 
weizhi a[3];
int n;
int main(){
	for(int i=1;i<=2;i++){
		cin>>a[i].l>>a[i].r>>a[i].s>>a[i].x;
	}
	if(abs(a[1].s-a[2].s)<a[1].h||abs(a[1].l-a[2].l)<a[1].w||abs(a[1].s-a[2].s)<a[2].h||abs(a[1].l-a[2].l)<a[2].w){
		
	}
	
}
