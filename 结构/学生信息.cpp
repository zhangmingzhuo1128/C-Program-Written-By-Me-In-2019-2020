#include<bits/stdc++.h>
using namespace std;
struct student{
	string name;
	string sex;
	int age;
	double weight;
};
student a[10];
int main(){
	cin>>a[0].name;
	cin>>a[0].sex;
	cin>>a[0].age;
	cin>>a[0].weight;
	cout<<a[0].name<<" "<<a[0].sex<<" "<<a[0].age<<" ";
	printf("%.1lf\n",a[0].weight);
}
