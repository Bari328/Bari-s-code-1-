#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N,cnt = 0;
	long long n[200010],C;
	cin >> N >> C;
	for(int i=1;i<=N;i++)
		cin >> n[i];
	sort(n+1 , n+N+1);
	
	for(int i = 1;i <= N;i++)
	{	long long l = 1+i,r = N,mid;
		long long ans=0;
		while(l < r)
		{
			mid = (l + r)/2;
			if(n[mid]-n[i]>=C)
				r=mid;
			else	l=mid+1;
		}
		if(n[l]-n[i]==C)
			ans = l;
		else
			continue;
		l=ans-1;r=N; 
		while(l < r)
		{
			mid = (l + r + 1)/2;
			if(n[mid]<=n[ans])
			{
				l=mid;
			}
			else 
				r=mid-1;
		}
		cnt+=l-ans+1;
	}
	cout << cnt;
	return 0;
 } 
