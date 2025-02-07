#include<bits/stdc++.h>
#include<queue>
using namespace std;
priority_queue<long long,vector<long long>,greater<long long> > q;
int main()
{
	long long n,m,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		q.push(m);
	}
	for(int i=1;i<=n-1;i++)
	{
		long long s=0;
		s+=q.top();
		q.pop();
		s+=q.top();
		sum+=s;
		q.pop();
		q.push(s);
	}
	cout<<sum;
	return 0;
}
