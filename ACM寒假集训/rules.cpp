#include<iostream>
#include <string.h>
using namespace std;
int main()
{
	int n,m,k,i,j,sum=0;
	cin>>n>>m>>k;
	for(i=0;i<m;i++)
	{
		int t=0,t1;
		for(j=0;j<n;j++)
		{
			cin>>t1;
			if(t1==k)
				t++;
		}
		if(t>=n/2&&n%2==0)
			sum+=1;
		else if(t>n/2&&n%2==1)
			sum+=1;
	} 
	if((sum>=m/2&&m%2==0)||(sum>m/2&&m%2==1))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
