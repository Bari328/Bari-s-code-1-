#include<bits/stdc++.h>
#include<queue>
using namespace std;
const int N=190;
const int dx[4]={1,-1,0,0};
const int dy[4]={0,0,1,-1};

int a[N][N],d[N][N];
bool vis[N][N];
queue <pair<int,int> > q;
int n,m;

bool available(int x,int y){
	return x>=1&&x<=n&&y>=1&&y<=m;
}
void bfs(int s){
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(available(nx,ny)&&!vis[nx][ny]){
				q.push({nx,ny});
				d[nx][ny]=d[x][y]+1;
				vis[nx][ny]=true;
			}
		}
	}
	return ;
}
int main(){
	
	cin>>n>>m; 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char c;
			cin>>c;
			a[i][j]=c-'0';
			if(a[i][j]==1){
				vis[i][j]=true;
				q.push({i,j});
			}
		}
	}
	bfs(1);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<d[i][j]<<' ';
		}cout<<endl;
	}
	return 0;
}
