#include<bits/stdc++.h>
using namespace std;
int main(){
	 int x=7;
	 bool dui=false;
	 for(x=7;dui==false;x=x+7){
	 	if(x%2==1&&x%3==1&&x%4==1&&x%5==1&&x%6==1){
	 		dui=true;
		 }
	 }
	 cout<<x;
}
