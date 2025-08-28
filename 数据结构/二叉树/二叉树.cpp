#include<bits/stdc++.h>
using namespace std;
#define NIL -1
 
int n,D[10000],H[10000];//深度高度 
struct Node{
	int parent,left,right;
};
Node T[10000];
void setDepth(int u,int d){//求每个顶点的深度 
	if( u == NIL ){
		return;
	}
	D[u]=d;
	setDepth(T[u].left,d+1);
	setDepth(T[u].right,d+1);
}
int setHeight(int u){//求高度 
	int h1=0,h2=0;
	if(T[u].left!= NIL){
		h1=setHeight(T[u].left)+1;	
	}
	if(T[u].right!=NIL){
		h2=setHeight(T[u].right)+1;
	}
	return H[u]=(h1>h2?h1:h2);	
} 

//返回结点u的兄弟节点
int getSibling(int u){
	if(T[u].parent==NIL){
		return NIL;
	}
	if(T[T[u].parent].left!=u&&T[T[u].parent].left!=NIL){
		return T[T[u].parent].left;
	}
	if(T[T[u].parent].right!=u&&T[T[u].parent].right!=NIL){
		return T[T[u].parent].right;
		
	}
	return NIL;
} 

void print(int u){
	printf("node %d: ",u);
	printf("parent = %d,",T[u].parent);
	printf(" sibling = %d,",getSibling(u));
	int deg=0;
	if(T[u].left!=NIL) deg++;
	if(T[u].right!=NIL) deg++;
	printf(" degree = %d,",deg);
	printf(" depth = %d,",D[u]);
	printf(" height = %d,",H[u]);
	if(T[u].parent==NIL) {
		printf(" root\n");
	} 
	else if(T[u].left==NIL&&T[u].right==NIL){
		printf(" leaf\n");
		
	}
	else {
		printf(" internal node\n");
	}
}

int main(){
	int v,l,r,root=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		T[i].parent=NIL;
		
	}
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&v,&l,&r);
		T[v].left=l;
		T[v].right=r;
		if(l!=NIL){
			T[l].parent=v;
		}
		if(r!=NIL) T[r].parent=v;
	}
	for(int i=0;i<n;i++){
		if(T[i].parent==NIL){
			root=i;
		}
	}
	setDepth(root,0);
	setHeight(root);
	for(int i=0;i<n;i++){
		print(i);
	}
}

/*
9 0 1 4 1 2 3 2 -1 -1 3 
-1 -1  4 5 8 5 6 7 6 -1 -1
 7 -1 -1 8 -1 -1
node 19: parent = 17, sibling = -1, degree = 0, depth = 6,
node 19: parent = 17, sibling = -1, degree = 0, depth = 6,
*/
