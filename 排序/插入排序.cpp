#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
	int n;//���� 
	cin>>n;//// 
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){// ����� 
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=2;i<=n;i++){// ����ʼ 
		 
		int v=a[i];//���� 
		int j=i-1;//jj++ j--���ѭ��
		while(v<a[j]&&j>0){// 
			a[j+1]=a[j];
			
		       // a[j]=v; 
			j--;		
		} 
			a[j+1]=v;//��21��Ҫһ������ 
		for(int i=1;i<=n;i++){
	    	cout<<a[i]<<" ";
		}	
		cout<<endl;
	}
	
}
