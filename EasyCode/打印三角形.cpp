#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int x=0;x<=100/5;x++)
	for(int y=0;y<=100/3;y++)
	{
		z=100-x-y;
		if(x*5+y*3+z/3==500)
		cout<<x<<" "<<y<<" "<<z<<" ";
		
	
		cout<<endl;
	}
	
}
