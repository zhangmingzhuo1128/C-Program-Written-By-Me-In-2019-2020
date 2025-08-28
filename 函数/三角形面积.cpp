#include<bits/stdc++.h>
using namespace std;
double L(int&a1,int&a2,int&b1,int&b2){
	int L2=(a1-b1)*(a1-b1)+(a2-b2)*(a2-b2);
	double L=sqrt(L2);
	return L;
}
int main(){
	int a1,a2,b1,b2,c1,c2;
	cin>>a1>>a2>>b1>>b2>>c1>>c2;
	double C=L(a1,a2,b1,b2)+L(b1,b2,c1,c2)+L(a1,a2,c1,c2);
	double aa=(C/2)*(C/2-L(a1,a2,b1,b2))*(C/2-L(b1,b2,c1,c2))*(C/2-L(a1,a2,c1,c2));
	double s=sqrt(aa);
	printf("%.2lf",s);
	
}

