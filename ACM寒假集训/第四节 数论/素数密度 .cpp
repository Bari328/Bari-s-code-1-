#include<iostream>
#include<vector>
#include <cmath>
using namespace std;
vector <long long> primes;
vector <bool> isprime;
void findprime()
{
	isprime.assign(50001,1);
	for(int i=2;i<=50000;i++)
	{
		if(isprime[i])
			{
				primes.push_back(i);
			}
		for(int j=0;j<primes.size()&&i*primes[j]<=50000;j++)
		{
			isprime[i*primes[j]]=false;
				if(i%primes[j]==0)
					break;
		}
	}
}
int main()
{
	long long l,r;
	cin>>l>>r;
	if(l==1)
		l=2;
	if(l>=r)
	{cout<<0;
		return 0;
	}
	findprime();
	vector <bool> isPrimeInRange;
	isPrimeInRange.assign(r-l+2,true);
	for (int i=0;i<primes.size();i++	) {
		long long prime=primes[i]; 
    	long long start = max(prime * prime, (l + prime - 1) / prime * prime);
    for (long long j = start; j <= r; j += prime) {
        isPrimeInRange[j - l] = false;
    	}
	}	
	long long cnt=0;
	for(long long i=0;i<r-l+1;i++){
		if(isPrimeInRange[i])
			cnt++;	 
	}
	cout<<cnt;	
	return 0;
}
