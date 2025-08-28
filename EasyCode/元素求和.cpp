#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[2929],d[6445],n,k,i,j,x=1; 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>k;
	for(int c=1;c<=k;c++){
        cin>>i>>j;
		while(i<=j)
		{
		
		d[x]=d[x]+a[i];
		i++;
	}
	x++;
cout<<d[c]<<endl;
	}

    
return 0;


}
