#include<bits/stdc++.h>
using namespace std;
struct State{
	int cup[3],step;
};
int vis[110][110][110];
int start[3],half;

bool ok(int x){
	if(x==half){
		return true;
	}
	else return false;
}
void bfs(){
	queue<State> vva;
	State a;
	a.cup[0]=start[0];
	a.cup[1]=a.cup[2]=a.step=0;
	vis[a.cup[0]][a.cup[1]][a.cup[2]]=1;
	vva.push(a);
	while(vva.size()){
	    a=vva.front();
		vva.pop();
		if(ok(a.cup[0])&&ok(a.cup[1])||ok(a.cup[0])&&ok(a.cup[2])||ok(a.cup[1])&&ok(a.cup[2])){
			cout<<a.step<<endl; 
		    return;
		}
		
			for(int i=0;i<3;i++){
				if(a.cup[i]>0){
					for(int j=0;j<3;j++){
						State tem=a;
					if(i==j){
						continue;
					}
					if(tem.cup[i]+tem.cup[j]>=start[j]){
						tem.cup[i]-=start[j]-tem.cup[j];
						tem.cup[j]=start[j];
					}
					else{
						tem.cup[j]+=tem.cup[i];
						tem.cup[i]=0;
						
					}
					if(!vis[tem.cup[0]][tem.cup[1]][tem.cup[2]]){
						tem.step++;
						vva.push(tem);
						vis[tem.cup[0]][tem.cup[1]][tem.cup[2]]=1;
					}
					
				}
				}
			}
		
		
	}
	cout<<"NO"<<endl;
}
int main(){
	while(cin>>start[0]>>start[1]>>start[2]){
		memset(vis,0,sizeof(vis));//∂‡◊È ‰»Î 
		if(start[0]+start[1]+start[2]==0){
			break;
		}
		
			if(start[0]%2!=0){
				cout<<"NO"<<endl;
				continue;
			}
			else{
				half=start[0]/2;
				bfs();
			}
		
	}
} 
