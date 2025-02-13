#include<bits/stdc++.h>

using namespace std;

const int N=1000+2;
const int dx[8]={1,-1,0,0,1,1,-1,-1};
const int dy[8]={0,0,1,-1,1,-1,1,-1};

int a[N][N],n;
bool vis[N][N];
bool available(int x,int y){
	return x>=1&&x<=n&&y>=1&&y<=n;
}
int r_count=0,v_count=0;

void bfs(int sx,int sy){
	bool is_r=true;
	bool is_v=true;
	
	queue <pair<int,int> > q;
	q.push({sx,sy});
	vis[sx][sy]=true;
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		for(int i=0;i<8;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(available(nx,ny)){
				if(a[nx][ny]==a[x][y]&&!vis[nx][ny]){
					vis[nx][ny]=true;
					q.push({nx,ny});
				}
				if(a[nx][ny]>a[x][y])
					is_r=false;
				if(a[nx][ny]<a[x][y])
					is_v=false;
			}
		}
	}
	if(is_r)	r_count++;
	if(is_v)	v_count++;
	return;
	
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			if(!vis[i][j])
				bfs(i,j);
		}
	cout<<r_count<<' '<<v_count;
	
	return 0;
}
