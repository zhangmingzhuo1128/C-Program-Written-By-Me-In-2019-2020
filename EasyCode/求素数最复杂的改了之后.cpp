#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,b,j,x;
	cin>>n;
	
	for(int a=2;a<=n;a++){
		bool f=true;
		for(int b=2;b<sqrt(a);b++)
		  if(a%b==0){ 
		    f= false;
		    
}
if(f==true){
 cout<<a<<" ";
x++;
if(x%10==0)
cout<<endl;
}
}
return 0;
}
