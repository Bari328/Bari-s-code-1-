#include<iostream>
using namespace std;
int main()
{
	long long a[100001];
	int n,q,i;
	cin >> n;
	for(i=1;i<=n;i++){
		cin >> a[i];
	}
	long long x[100000];
	cin >> q;
	for(i=1;i<=q;i++){
		cin >> x[i];}
	for(i=1;i<=q;i++){
		int ans = 0;
		int mid = 1,l = 1,r = n,t = 1;
		while(l <= r){
			mid = (l+r)/2;
			if(a[mid] > x[i]) r = mid - 1;
			else if(a[mid]<x[i])
				l = mid + 1;
			else if(a[mid]==x[i]) 
			{
				ans = 1;break;
				}	
		}
		if(ans==1)	cout << "Yes"<<endl;
		else if(ans==0) cout << "No"<<endl;
	}
	return 0;
 }
