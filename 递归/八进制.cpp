#include<bits/stdc++.h>
using namespace std;
int jinzhi(int n){
	if(n%8>0)
	return n%8+jinzhi(n/8)*10; 

}
int main(){
	int n;
	cin>>n;
	cout<<jinzhi(n);
}
