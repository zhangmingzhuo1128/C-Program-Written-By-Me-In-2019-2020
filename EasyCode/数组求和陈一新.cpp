#include<iostream>
using namespace std;
int a[1000];
int d[2100];
int main()
{
	int n,k,j,i,x=1;
	cin>>n;
	for(int b=1;b<=n;b++)
	{
		cin>>a[b];
	}
	cin>>k;
	for(int c=1;c<=k;c++)
	{
		cin>>i>>j;
		while(i<=j)
		{
			d[x]+=a[i];
			i++;	
		}
		x++;
	}
	for(int c=1;c<=k;c++)
	    cout<<d[c]<<endl;
	return 0;
}
