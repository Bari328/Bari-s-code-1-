#include<iostream>
#include<algorithm>
using namespace std;
long long n,m,a[200010],b[200010];
bool check(long long mid)
{	
	long long sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=max(mid-a[i],(long long)0);
	}
	if(sum<=m) return true;
	else return false;
 }
int main()
{	long long m=10000000;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin >> a[i];
	for(int i=1;i<=n;i++)
		cin >> b[i];
	for(int i=1;i<=n;i++)
		m=min(m,a[i]+b[i]);
	long long l=1,r=m+1;
	while(l<r)
	{
		int mid=(l+r+1)/2;
		if(check(mid))	l=mid;
		else r=mid-1;
	}
	cout<<l;
	 
}
