#include<bits/stdc++.h>
using namespace std;
int main(){
	int j;
	for(int a=100;a<=200;a++){
		bool f=true;
		for(int b=2;b<sqrt(a);b++)
		  if(a%b==0){ 
		    f= false;
		    
}
if(f==true){
	j=a;
 cout<<j<<" ";
}
}
return 0;
}
