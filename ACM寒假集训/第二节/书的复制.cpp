#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int m,a[510],k;
bool check(int mid)
{	
	int sum=0,cnt=1;
	for(int i=1;i<=m;i++)
	{
			if(sum+a[i]<=mid)
				sum+=a[i];
			else                                         
			{
				if(a[i]>mid)
					return false;
				cnt++;
				if(cnt>k)
					return false;
				sum=a[i];
			}
	}
		return true;	
}
int main()
{
	
	int i,sum=0;
	cin>>m>>k;
	for(i=1;i<=m;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	int r=sum,l=1,mid;
	while(l<r)
	{
		mid=(r+l)/2;
		if(check(mid)) r=mid;
		else l=mid+1;
	}
	sum=0;
	int st[501],en[501];
	int cnt=k;
	en[cnt]=m;
	for(i=m;i>0;i--)
	{
		if((sum+a[i])>l)
		{
			sum=a[i];
			st[cnt]=i+1;
			cnt--;
			en[cnt]=i;
		}
		else
		sum+=a[i];
	}
	st[1]=1;
	for(i=1;i<=k;i++)
	cout<<st[i]<<' '<<en[i]<<endl; 
	return 0;
}
