#include<iostream>
using namespace std;
long long GCD(long long a,long long b)
{
	long long r;
	while(b)
	{
	r=a%b;
	a=b;
	b=r;
	}
	return a;
}
int main()
{
	long long lcm,gcd,a,b,ans=0;
	cin>>gcd>>lcm;
	for(int i=1;gcd*i*gcd*i<=lcm*gcd;i++)
	{
		a=gcd*i;
		b=gcd*lcm/a;
		if(GCD(a,b)==gcd&&a*b==gcd*lcm)
		{
			if(a==b)
				ans+=1;
			else
				ans+=2; 
		}
	}
	cout<<ans;
	return 0;
}
