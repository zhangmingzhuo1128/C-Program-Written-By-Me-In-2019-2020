#include<bits/stdc++.h>
using namespace std;
int main()
{
	int long long sum=0,i,A=1,j,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			A=A*i;	
		}
	sum=sum+A;
		
	}
	cout<<sum;
}



