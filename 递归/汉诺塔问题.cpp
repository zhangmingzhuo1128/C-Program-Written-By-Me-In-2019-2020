#include<bits/stdc++.h>
using namespace std;
void move(int n,char A,char B,char C){
	if(n==1)
	//cout<<A<<"->"<<C<<endl;
	printf("%c->%c\n",A,C);
	if(n>=2){
		move(n-1,A,C,B);
		printf("%c->%c\n",A,C);
		move(n-1,B,A,C);
	}
}int main(){
	int n;
	char A,B,C;
	scanf("%d",&n);
	move(n,'A','B','C');
	return 0;
}
