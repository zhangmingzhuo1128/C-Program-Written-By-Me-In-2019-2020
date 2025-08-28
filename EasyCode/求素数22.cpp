#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0;
    cin>>n;
    for(int i=2;i<=n;++i){
        int x=2;
        while(x<=floor(sqrt(i))&&(i%x!=0))
        ++x;
        if(x>floor(sqrt(i))){
        cout<<i<<" ";}
    }
	}
        
