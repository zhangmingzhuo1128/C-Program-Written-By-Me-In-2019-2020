/*#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
#define NIL -1

struct Node {
	int p,l,r;
};
struct Node T[MAX];
int n;

//Ç°Ðò±éÀú
void preparse(int u){
	if(u==NIL){
		return;
	}
	printf(" %d",u);
	preparse(T[u].l);
	preparse(T[u].r);
}
void inparse(int u){
	if(u==NIL){
		return;
	}
	inparse(T[u].l);
	printf(" %d",u);
	inparse(T[u].r);
}
void postparse(int u){
	if(u==NIL) return;
	postparse(T[u].l);
	postparse(T[u].r);
	printf(" %d",u);
}
int main(){
	int v,l,r,root;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		T[i].p=NIL;
	}
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&v,&l,&r);
		T[v].l=l;
		T[v].r=r;
		if(l!=NIL) T[l].p=v;
		if(r!=NIL) T[r].p=v;
	}
	for(int i=0;i<n;i++){
		if(T[i].p==NIL){
			root=i;
		}
	}
	printf("Preorder\n");
	preparse(root);
	printf("\n");
	printf("Inorder\n");
	inparse(root);
	printf("\n");
	printf("Postorder\n");
	postparse(root);
	printf("\n");
	
}*/
#include<bits/stdc++.h>
using namespace std;
#define NIL -1

struct Node{
	int l,r,p;
};
Node T[10000];
int n;

void pre(int u){
	if(u==NIL){
		return;
	}
	cout<<" "<<u;
	pre(T[u].l);
	pre(T[u].r);
}
void in(int u){
	if(u==NIL){
		return;
	}
	in(T[u].l);
	cout<<" "<<u;
	in(T[u].r);
}
void post(int u){
	if(u==NIL){
		return;
	}
	post(T[u].l);
	post(T[u].r);
	cout<<" "<<u;
}
int main(){
	int v,l,r,root;
	cin>>n;
	for(int i=0;i<n;i++){
		T[i].p=-1;
	}
	for(int i=0;i<n;i++){
		cin>>v>>l>>r;
		T[v].l=l;
		T[v].r=r;
		if(l!=-1) T[l].p=v;
		if(r!=-1) T[r].p=v;
	}
	for(int i=0;i<n;i++){
		if(T[i].p==-1){
			root=i;
		}
		
	}
	cout<<"Preorder"<<endl;
	pre(root);
	cout<<endl;
	cout<<"Inorder"<<endl;
	in(root);
	cout<<endl;
	cout<<"Postorder"<<endl;
	post(root);
	cout<<endl; 
}
