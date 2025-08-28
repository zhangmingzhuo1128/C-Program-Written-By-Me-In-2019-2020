#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int x=0;x<=500/15;x++){
		for(int y=0;y<=500/10;y++){
			for(int z=0;z<=100;z++){
				if(x+y+z==90&&(15*x+10*y+5*z==500)){
					cout<<x<<" "<<y<<" "<<z<<endl;
				}
			}
		}
	}
}
