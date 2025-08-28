#include<bits/stdc++.h>
using namespace std;
struct student{
	string name;
	int chinese,math;
	int total;
	void print(){
		cout<<"Name:"<<name<<endl;
		cout<<"Math:"<<math<<endl;
		cout<<"Chinese:"<<chinese<<endl;
		cout<<"Total:"<<total;
	}
};
student a[110];
int n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].name;
		cin>>a[i].chinese>>a[i].math;
		a[i].total=a[i].chinese+a[i].math;
	}
	for(int i=n-1;i>0;i--)
	for(int j=0;j<i;j++){
		if(a[j].total<a[j+1].total){
			swap(a[j],a[j+1]);
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i].name<<" "<<a[i].chinese<<" "<<a[i].math<<" "<<a[i].total;
		return 0;
}
}
