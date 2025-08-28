#include<bits/stdc++.h>
using namespace std;
int ys(int a,int b){
    if (b==0) 
    return a;
    else 
    return ys(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<ys(a,b);
    
}
