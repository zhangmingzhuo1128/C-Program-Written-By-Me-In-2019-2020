#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int a,b;
	double c;
	cin>>a>>b;
	c=a*87/(a+b)+b*85/(a+b);
	printf("%.1lf",c);
	return 0;
 } 
