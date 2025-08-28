#include<bits/stdc++.h>
using namespace std;
int num,x,y,k,a[1030][1030];
void chess(int ax,int ay,int bx,int by,int size){
	if(size==1){
		return;
	}
	int s=size/2;//?-??￡???????è?1é?? 
	int t=num++;//填入方格的编号 
	if(bx<ax+s&&by<ay+s){//?±???“??1??¨?·|????-??￡???? 
		chess(ax,ay,bx,by,s);	
	}
	else{
		a[ax+s-1][ay+s-1]=t;
		chess(ax,ay,ax+s-1,ay+s-1,s);
	}
	
	
	if(bx<ax+s&&by>=ay+s){//?±???“??1??¨??3????￡???? 
		chess(ax,ay+s,bx,by,s);	
	}
	else{
		a[ax+s-1][ay+s]=t;
		chess(ax,ay+s,ax+s-1,ay+s,s);
	}
	
	
	if(bx>=ax+s&&by<ay+s){//?±???“??1??¨?·|????-??￡???? 
		chess(ax+s,ay,bx,by,s);
	}
	else{
		a[ax+s][ay+s-1]=t;
		chess(ax+s,ay,ax+s,ay+s-1,s);
	}
	
	
	if(bx>=ax+s&&by>=ay+s){//?±???“??1??¨??3????-??￡???? 
		chess(ax+s,ay+s,bx,by,s);
	}
	else{
		a[ax+s][ay+s]=t;
		chess(ax+s,ay+s,ax+s,ay+s,s);
	}
}



int main(){
	num=1;
	scanf("%d%d%d",&k,&x,&y);
	k=pow(2,k);
	chess(1,1,x,y,k);
	for(int i=1;i<=k;i++){
		for(int j=1;j<=k;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}	
}
