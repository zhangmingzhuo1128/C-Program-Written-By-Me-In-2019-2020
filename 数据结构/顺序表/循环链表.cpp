#include<bits/stdc++.h>
using namespace std;
int main(){
	list<int> L;
	list<int>::iterator cur=L.begin();//begin()或者end()都行 
	int p;//t条命令 
	scanf("%d",&p);
	int x,y;
	for(int i=1;i<=p;i++){
		
		scanf("%d",&x);
		switch(x){
			case 0:
				scanf("%d",&y);
				cur=L.insert(cur,y);//??????????
				break;
			
			case 1:
				scanf("%d",&y);
				if(y>0){ 
				for(int i=1;i<=y;i++){
					cur++;
				}
			}
				else{
				for(int i=1;i<=-y;i++)
				cur--;
			
		        }  
		         break;
			case 2:
				cur=L.erase(cur);
				break;
		}
		}
		for(list<int>::iterator it=L.begin();it!=L.end();it++){
			printf("%d\n", *it);
		}
		
	}

