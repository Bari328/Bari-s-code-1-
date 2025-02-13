#include<bits/stdc++.h>
#include<queue>
using namespace std;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int a[32][32]={0},n;
struct node{
	int x,y;
};
bool available(int x,int y){
	return x>=0&&x<=n+1&&y>=0&&y<=n+1;
}
void bfs(int n){
	queue <node> q;
	node start;
	start.x=0;start.y=0;
	bool vis[32][32]={0};
	q.push(start);
	vis[start.y][start.x]=true;
	node New;
	while(!q.empty()){
		for(int i=0;i<4;i++){
			New.y=q.front().y+dy[i];
			New.x=q.front().x+dx[i];
			if(available(New.x,New.y)&&!vis[New.y][New.x]&&a[New.y][New.x]==0){
				q.push(New);
				a[New.y][New.x]=1;
				vis[New.y][New.x]=true;	
			}
		}q.pop();
	}
}
int main(){
	int b[32][32];
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int t;
			cin>>t;
			a[i][j]=t,b[i][j]=t;
		}
	}
	bfs(n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(!a[i][j]){
				b[i][j]=2;
			}
		}
	}for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<b[i][j]<<' ';
			}cout<<endl;
		}
}
