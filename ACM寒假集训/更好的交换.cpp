#include<iostream>
#include <string.h>
#include<algorithm>
using namespace std;
int main()
{
	int arr[1000][1000];
	int n,m,i,j,p[1000],q[1000];
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		q[i]=p[i]=i;
		for(j=0;j<n;j++)
			cin>>arr[i][j];
	}
	for(i=0;i<m;i++)
	{
		int op,x,y;
		cin>>op>>x>>y;
		if(op) swap(p[x-1],p[y-1]);
		else	swap(q[x-1],q[y-1]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cout<<arr[p[i]][q[j]]<<' ';
		cout<<endl;
	}
	return 0;
}
