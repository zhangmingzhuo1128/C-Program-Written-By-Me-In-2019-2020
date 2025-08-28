#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,z;
	for(int x=0;x<=500/15;x++){
	    for(int y=0;y<=500/10;y++)
	{
		z=90-x-y;
		if(x*15+y*10+z*5==500)
		cout<<x<<" "<<y<<" "<<z<<endl;

	}
}
}
