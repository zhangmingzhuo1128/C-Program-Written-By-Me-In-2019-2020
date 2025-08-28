#include<bits/stdc++.h>
using namespace std;
int main(){
	double c0;
	int v0;
	cin>>v0>>c0;
	int n;
	cin>>n; 
	char operate;
	
	stack<int> VV;
	stack<double> CC; 
	for(int i=1;i<=n;i++){
	    cin>>operate;//scanf("%c",&operate);
		if(operate=='P'){
			double c1;
			int v1;
			cin>>v1>>c1;//scanf("%d%lf",&v1,&c1);
			VV.push(v1);
			CC.push(c1);
		    c0=(c0*v0+c1*v1)/(v0+v1);
			v0+=v1;
			printf("%d %.5lf\n",v0,c0);
		}
		if(operate=='Z'){
			if(VV.size()){
				int v1=VV.top();
				double c1=CC.top();
				VV.pop();
				CC.pop(); 
				c0=(v0*c0-v1*c1)/(v0-v1);
				v0=v0-v1;
				printf("%d %.5lf\n",v0,c0);
			}
			else{
				printf("%d %.5lf\n",v0,c0);
			//100 100 2 P 100 0 Z
		}
	} 
}
	
}
