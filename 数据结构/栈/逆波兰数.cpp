#include<bits/stdc++.h>
using namespace std;
int main(){
	string qm;
	stack<int> vva;
	int s=0,l=0,r=0;
	while(cin>>qm){
		if(isdigit(qm[0])){
			vva.push(atoi(qm.c_str()));//c_str 把str转换成C语言里面一个字符数组 
			//qm.c_str()把字符数组作为参数传给atoi这个函数
			//这个函数把字符数组转换成数字 
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
