/*本题思路：创建与7个字母对应的数组，再通过两次循环读取字符串s的内容并记录
	最后相加得出总和。*/


#include<iostream>
#include <string.h>
using namespace std;
int main()
{
	int sum,t,n,m,k;
	cin>>t;
	int i,j;
	for(i=0;i<t;i++)
	{
		int N[7]={0};
		sum=0;
		cin>>n;
		cin>>m;
		string s;
		cin>>s;
		for(j=0;j<n;j++)
		{
			switch(s[j]){
				case'A':
				N[0]+=1;break;
				case'B':
				N[1]+=1;break;
				case'C':
				N[2]+=1;break;	
				case'D':
				N[3]+=1;break;
				case'E':
				N[4]+=1;break;
				case'F':
				N[5]+=1;break;
				case'G':
				N[6]+=1;break;
				default: break;
			}
		}
		for(j=0;j<7;j++)
		if(N[j]<m)
			sum+=m-N[j];
		cout<<sum<<endl;
	}
	return 0;
}


//本题总结：无
