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
	int d=1;//dΪ����������10��d���� 
	for(int i=1;i<=5;i++){//ö��ÿ����λ 
		memset(bucket,0,sizeof(bucket));//��0�� 
		for(int j=0;j<n;j++){//����ÿһ������ 
			int x=a[j]/d%10;//ȡ�µ�ǰ��λ�� 
			bucket[x][0]++;//��ӦͰ�������ֵĸ��� 
			bucket[x][bucket[x][0]]=a[j];//���浱ǰ������Ͱ�� 
		}
		int num=0;//��Ͱ��ȡ�����ֵĸ�����
		for(int m=0;m<10;m++){//ö��ÿһ��Ͱ 
			for(int n=1;n<=bucket[m][0];n++){//ö��Ͱ��ÿһ������ 
				a[num]=bucket[m][n];//��Ͱ�����ַ����������� 
				num++;
			}
		} 
		d=d*10;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	} 
}
