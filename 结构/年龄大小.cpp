#include<bits/stdc++.h>
using namespace std;
struct student{
	string name;
	string sex;
	int year;
	int month;
};
student a[105];
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].name;
		cin>>a[i].sex;
		cin>>a[i].year;
		cin>>a[i].month;
	}
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=n-1;j++){
			if(a[j].year<a[j+1].year||(a[j].year==a[j+1].year&&a[j].month<a[j+1].month)){
			swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i].name<<" "<<a[i].sex<<" "<<a[i].year<<" "<<a[i].month<<endl;
	}
}

