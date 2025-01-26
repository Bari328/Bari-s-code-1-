#include<iostream>
#include<algorithm>
using namespace std;
long long k,n,h[100010],w[100010];
	
bool check(long long mid)
{
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=(h[i]/mid)*(w[i]/mid);	
	}
	if(sum>=k)
		return true;
	else
		return false;
}
int main()
{	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin >> h[i] >> w[i];
	int l=0,r=n;
	while(l<r)
	{
		long long mid=(l+r+1)/2;
		if(check(mid)) l=mid;
		else r=mid-1;
	}
		cout <<l;
	return 0;
}
