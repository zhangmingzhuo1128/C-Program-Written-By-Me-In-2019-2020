#include<bits/stdc++.h>
using namespace std;
int main(){
	string qm;
	stack<int> vva;
	int s=0,l=0,r=0;
	while(cin>>qm){
		if(isdigit(qm[0])){
			vva.push(atoi(qm.c_str()));//c_str ��strת����C��������һ���ַ����� 
			//qm.c_str()���ַ�������Ϊ��������atoi�������
			//����������ַ�����ת�������� 
		}
		else{
			l=vva.top();
			vva.pop();
			r=vva.top();
			vva.pop();
			switch(qm[0]){
				case '+':
					s=r+l;
					break;
				case '-':
					s=r-l;
					break;
				case '*':
					s=r*l;
					break;	
			}
			vva.push(s);
		}
	}
	cout<<s;
} 
