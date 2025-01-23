#include<iostream>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long N,Q;
	int i;
	cin>>N;
	string S;
	cin>>S;
	cin>>Q;
	char a[30];
	for(int j='a';j<='z';j++)
		a[j-97]=j;
	for(i=0;i<Q;i++)
	{
		char c,d;
		cin>>c>>d;
		for(int j=0;j<26;j++)
			if(a[j]==c)
				a[j]=d;
	}
	for(i=0;i<N;i++)
		cout<<a[S[i]-97];
	return 0;
}
