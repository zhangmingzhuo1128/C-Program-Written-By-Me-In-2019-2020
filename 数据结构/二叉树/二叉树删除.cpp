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
		if(a[t].key>a[x].key){
			x=a[x].right;
		}
		else x=a[x].left;
		
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
	cout<<" "<<a[t].key;
	printfirst(a[t].left);
	printfirst(a[t].right);
}
void printmid(int t){
	if(t==0) return;
	printmid(a[t].left);
	cout<<" "<<a[t].key;
	printmid(a[t].right);
}
int find(int inf,int t){
	if(t==0) return 0;
	if(a[t].key==inf) return t;
	if(a[t].key<inf) return find(inf,a[t].right);
	else return find(inf,a[t].left);
}
void Delete(int t){
	int n;
	if(t==a[a[t].parent].left){
		n=0;
	}
	else n=1;
	if(!a[t].left&&!a[t].right){
		if(n==0){
			a[a[t].parent].left=0;
		}
		else a[a[t].parent].right=0;
	}
	if(!a[t].left&&a[t].right){
		if(n==0){
			a[a[t].parent].left=a[t].right;
			a[a[t].right].parent=a[t].parent;
		}
		else{
			a[a[t].parent].right=a[t].right;
			a[a[t].right].parent=a[t].parent;
		}
	}
	if(a[t].left&&!a[t].right){
		if(n==0){
			a[a[t].parent].left=a[t].left;
			a[a[t].left].parent=a[t].parent;
		}
		else{
			a[a[t].parent].right=a[t].left;
			a[a[t].left].parent=a[t].parent;
		}
	}
	if(a[t].left&&a[t].right){
		int temp=a[t].right;
		while(a[temp].left!=0) temp=a[temp].left;
		Delete(temp);
		a[t].key=a[temp].key;
	}
}
int main(){
	int m,inf,n;
	string order;
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>order;
		if(order=="insert"){
			cin>>inf; 
			a[++cnt].key=inf;
			insert(cnt);
		}
		if(order=="delete"){
			cin>>inf;
			n=find(inf,root);
			Delete(n);
		}
		if(order=="find"){
			cin>>inf;
			if(find(inf,root)!=0)
			cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
		if(order=="print"){
			printmid(root);
		    cout<<endl;
		    printfirst(root);
		    cout<<endl;
		} 
		
	}
	
}
