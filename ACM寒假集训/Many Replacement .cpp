/*本体思路：方法一：暴力替换，通过对S字符串内的每个字母的遍历替换实现
	    方法二：观察得知本题中字母的替换与S并无关系，故可将字母单独替换，利用字符数组或
		   整数数组对26个字母进行替换，再在此基础上输出S。
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
//本题总结，方法一的时间复杂度为n(Q*N)。方法二的时间复杂度为n(Q+N).
//在今后解题中要注意算法的优化。
