#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
	int n;//输入 
	cin>>n;//// 
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){// 答案输出 
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=2;i<=n;i++){// 排序开始 
		 
		int v=a[i];//保存 
		int j=i-1;//jj++ j--多次循环
		while(v<a[j]&&j>0){// 
			a[j+1]=a[j];
			
		       // a[j]=v; 
			j--;		
		} 
			a[j+1]=v;//与21行要一个就行 
		for(int i=1;i<=n;i++){
	    	cout<<a[i]<<" ";
		}	
		cout<<endl;
	}
	
}
