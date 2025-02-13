#include<iostream> 
using namespace std;
int a[10]; 
void dfs(int s,int step){
	if(s==0&&step!=2){
		for(int i=1;i<step-1;i++){
			cout<<a[i]<<"+";
		}cout<<a[step-1]<<endl;
		return;
	}
	for(int i=1;i<=s;i++){
		if(a[step-1]>i) continue;
			a[step]=i;
			dfs(s-i,step+1);
			if(s-i==0) return ;
	}
}
int main(){
	int n;
	cin>>n;
	dfs(n,1);
	return 0;
}
