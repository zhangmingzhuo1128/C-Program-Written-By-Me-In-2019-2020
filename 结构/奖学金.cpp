#include<bits/stdc++.h>
using namespace std;
struct student{
	int No;
	int chinese;
	int math;
	int English;
	int total;
};
student a[300];
int n;
int main(){
	
	cin>>n;
	for(int i=1;i<=n;i++){
		a[i].No=i;
		cin>>a[i].chinese;
		cin>>a[i].math;
		cin>>a[i].English;
		a[i].total=a[i].chinese+a[i].math+a[i].English;
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			if(a[j].total<a[j+1].total||(a[j].total==a[j+1].total&&a[j].chinese<a[j+1].chinese)||(a[j].total==a[j+1].total&&a[j].chinese==a[j+1].chinese&&a[j].No>a[j+1].No)){
				swap(a[j],a[j+1]);
			}
		}
		
	}
	for(int i=1;i<=5;i++){
		cout<<a[i].No<<" "<<a[i].total<<endl;
	} 
	
}
