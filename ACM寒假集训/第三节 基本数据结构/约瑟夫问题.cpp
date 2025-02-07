#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int a[105],n,m;
	queue <int> q;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		q.push(i);
	int k=0,t=0;
	while(q.size()>0)
	{
		t++;
		if(t==m)
		{
			a[k]=q.front();
			q.pop();
			k++;
			t=0;
		}
		else
		{
			q.push(q.front());
			q.pop();
		}
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<' ';
}
