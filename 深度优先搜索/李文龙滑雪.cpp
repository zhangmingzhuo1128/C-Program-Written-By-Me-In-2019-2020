#include<bits/stdc++.h> 
using namespace std;
const int maxn=101;
int n,m;
int diss[maxn][maxn];//记录该点的最大值 
int mmp[maxn][maxn];//地图 
int dir[4][2] = {{1,0},{-1,0},{0,-1},{0,1}};
int dfs(int x,int y){
    if(diss[x][y]!=0)//被访问过    
        return diss[x][y]; 
    int ops = 1;
    for(int i=0;i<4;i++){
        int tx = x+dir[i][0];
        int ty = y+dir[i][1];
        if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&(mmp[x][y]>mmp[tx][ty]))  
            ops = max(dfs(tx,ty)+1,ops);   
    }
    diss[x][y] = ops;    
    return ops;
}
int main(){
    while(cin>>n>>m){
        memset(diss,0,sizeof(diss));
        memset(mmp,0,sizeof(mmp));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin>>mmp[i][j];
        int ans = 0;
        for(int i=1; i<=n;i++)
            for(int j=1;j<=m;j++)
                ans = max(dfs(i,j),ans);
        printf("%d\n", ans);
    }
    return 0;
}
