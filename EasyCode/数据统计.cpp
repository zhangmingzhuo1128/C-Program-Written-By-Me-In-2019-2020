	#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0,x,min=10000000,max=-1000000,s=0;
	while(scanf("%d",&x)==1){
		s+=x;
		min=x<min? x:min;
		max=x>max? x:max;
		++n;
	}
    printf("%d %d %.3lf\n",min,max,(double)s/n);
		}
