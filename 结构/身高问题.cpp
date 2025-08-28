#include<bits/stdc++.h>
using namespace std;
struct student{
	string name;
	int height;
	int No;
};
student a[105];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].name>>a[i].height>>a[i].No;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
				if(a[j].height<a[j+1].height){
					swap(a[j],a[j+1]);
				}
				if(a[j].height==a[j+1].height&&a[j].No>a[j+1].No){
					swap(a[j],a[j+1]);
				} 
		}
	}
	cout<<a[1].name<<" "<<a[1].height<<" "<<a[1].No;
}
