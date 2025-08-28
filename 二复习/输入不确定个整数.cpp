#include<bits/stdc++.h>
using namespace std;
int main(){
	int max=0,min=1000,x,cnt=0;
	double s=0;
	while(scanf("%d",&x)==1){
		s=s+x;if(x<min){
			min=x;
		}
		if(x>max){
			
			max=x;
		}
		cnt++;
	}
	cout<<min<<" "<<max<<" ";
	s=s/cnt;
	printf("%0.3lf",s);
} 
