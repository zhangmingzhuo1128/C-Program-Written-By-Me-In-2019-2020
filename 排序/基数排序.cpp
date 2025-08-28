#include<bits/stdc++.h>
using namespace std;
int a[100005];
int bucket[10][100005]; 
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int d=1;//d为基数，代表10的d次幂 
	for(int i=1;i<=5;i++){//枚举每个数位 
		memset(bucket,0,sizeof(bucket));//清0； 
		for(int j=0;j<n;j++){//美剧每一个数字 
			int x=a[j]/d%10;//取下当前数位； 
			bucket[x][0]++;//对应桶里面数字的个数 
			bucket[x][bucket[x][0]]=a[j];//保存当前数字至桶内 
		}
		int num=0;//从桶里取出数字的个数；
		for(int m=0;m<10;m++){//枚举每一个桶 
			for(int n=1;n<=bucket[m][0];n++){//枚举桶内每一个数字 
				a[num]=bucket[m][n];//把桶中数字放入输入数组 
				num++;
			}
		} 
		d=d*10;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	} 
}
