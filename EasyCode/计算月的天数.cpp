#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,t,x,y;
	cin>>a>>b;
    if((a%4==0&&a%100!=0)||(a%400==0)){
	switch(b){
		case 1:t=31;break;
		case 2:t=29;break;
		case 3:t=31;break;
		case 4:t=30;break;
		case 5:t=31;break;
		case 6:t=30;break;
		case 7:t=31;break;
		case 8:t=31;break;
		case 9:t=30;break;
		case 10:t=31;break;
		case 11:t=30;break;
		case 12:t=31;break;
	}
    }
    
	else{
	switch(b){
		case 1:t=31;break;
		case 2:t=28;break;
		case 3:t=31;break;
		case 4:t=30;break;
		case 5:t=31;break;
		case 6:t=30;break;
		case 7:t=31;break;
		case 8:t=31;break;
		case 9:t=30;break;
		case 10:t=31;break;
		case 11:t=30;break;
		case 12:t=31;break;
	}
	}
	cout<<t;
	}
