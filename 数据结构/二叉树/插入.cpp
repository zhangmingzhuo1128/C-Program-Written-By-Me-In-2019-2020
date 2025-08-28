#include<bits/stdc++.h>
using namespace std;
struct node{
	int left,right,key,parent;
}a[1000005];
int cnt,root;
void insert(int t){
	int y=0;
	int x=root;
	while(x!=0){
		y=x;
		if(a[t].key>a[x].key)
			x=a[x].right;
		else x=a[x].left;
		
	}
	a[t].parent=y;
	if(y==0) root=t;
	else if(a[t].key<a[y].key) a[y].left=t;
	else a[y].right=t
}
void printfirst(int t){
	if
}
int main(){
	int m,inf;
	string order;
	cin>>m;
	for(int i=1i<=m;i++){
		cin>>order;
		if(order=="insert"){
			cin>>inf;
		
			a[++cnt].key=inf;
			insert(cnt);
		}
		else{
			printmid(root);
			cout<<endl;
			printfirst(root);
			cout<<endl;
		}
	}
}
