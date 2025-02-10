#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int main(){
	ll n,l,r;
	cin>>n;
	vector <ll> ans;
	ans.assign(105,0);
	for(int i=1;i<=n;i++)
	{
		cin>>l>>r;
		if(l==1)	
		{
			if(r==1)
				ans[i]=1;
			else
				ans[i]=r-l;
		}
		else
			if(l==r)
				ans[i]=0;
			else
				ans[i]=r-l;
	}
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<endl;
	return 0;
}
