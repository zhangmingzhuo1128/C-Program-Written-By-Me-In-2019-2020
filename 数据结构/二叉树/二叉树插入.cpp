#include<bits/stdc++.h>
using namespace std;
struct node{
	int left,right,key,parent;
}a[1000005];
int cnt,root;
void insert(int t){// 
	int y=0 ;
	int x=root;
	while(x!=0){//µ½×îµÍµã 
		y=x;
		if(a[t].key>a[x].key){
			x=a[x].right;
		}
		else {
			x=a[x].left;
		}
	}
	a[t].parent=y;
	if(y==0){
		root=t;
	}
	else if(a[t].key<a[y].key){
		a[y].left=t;
	} 
	else a[y].right=t;
}
void printfirst(int t){
	if(t==0) return;
	cout<<' '<<a[t].key;
	printfirst(a[t].left);
	printfirst(a[t].right); 
}
void printmid(int t){
	if(t==0) return;
	printmid(a[t].left);
	cout<<' '<<a[t].key;
	printmid(a[t].right); 
}
int main(){
	/*
	8
	insert 30 
	insert 88 
	insert 12 
	insert 1
	insert 20
	insert 17 
	insert 25
	print
	1 12 17 20 25 30 88 30 12 1 20 17 25 88
	*/
	int m,inf;
	string order;
	cin>>m;
	for(int i=1;i<=m;i++){
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

