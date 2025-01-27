思路：对于卡牌；只要找出a[i]+b[i]的最小值，以此作为r的起始值，这样就不用管b[i]的限制
	之后利用二分答案的模板就可以完成。
#include<iostream>
#include<algorithm>
using namespace std;
long long n,m,a[200010],b[200010],M;
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
{	long long M=10000000;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin >> a[i];
	for(int i=1;i<=n;i++)
		cin >> b[i];
	for(int i=1;i<=n;i++)
		M=min(M,a[i]+b[i]);
	long long l=1,r=M;
	while(l<r)
	{
		int mid=(l+r+1)/2;
		if(check(mid))	l=mid;
		else r=mid-1;
	}
	cout<<l;
	 
}
总结:记住变量别重复了|——|
