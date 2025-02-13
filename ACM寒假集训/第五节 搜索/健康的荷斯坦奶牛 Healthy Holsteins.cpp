 #include<bits/stdc++.h>

using namespace std;
const int V=25+3;
const int G=15+3;

int v,g;
int need[V];
int feed[G][V];

int cnt[V];
vector <int> choose;
vector <int> ans;
bool ok(){
	int fault;
	for(int i=1;i<=v;i++){
		if(cnt[i]<need[i])
			return false;
	}
	return true;
}

void dfs(int k){
	//ัก
	if(ok()){
		if(ans.empty())
			ans=choose;
		else if(ans.size()>choose.size())
			ans=choose;
		else if(ans.size()==choose.size()&&ans>choose)
			ans=choose;
		return;
	}
	 
	if(k>g)
		return;
	choose.push_back(k);
	for(int i=1;i<=v;i++){
		cnt[i]+=feed[k][i];
	}
	dfs(k+1);
	choose.pop_back();
	for(int i=1;i<=v;i++){
		cnt[i]-=feed[k][i];
	}
	//ฒปัก
	dfs(k+1); 
}

int main(){
	cin>>v;
	for(int i=1;i<=v;i++){
		cin>>need[i];
	}
	cin>>g;
	for(int i=1;i<=g;i++)
		for(int j=1;j<=v;j++)
			cin>>feed[i][j];
	dfs(1);
	cout<<ans.size();
	for(int i=0;i<ans.size();i++){
		cout<<' '<<ans[i];
	}
	return 0;
}
