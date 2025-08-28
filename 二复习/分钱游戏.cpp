#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=8,y=8,z=8;
	y=y/2;
	x=x/2;
	z=z+x+y;
	z=z/2;
	x=x/2;
	y=y+x+z;
	y=y/2;
	z=z/2;
	x=x+y+z;
	cout<<x<<" "<<y<<" "<<z;
}
