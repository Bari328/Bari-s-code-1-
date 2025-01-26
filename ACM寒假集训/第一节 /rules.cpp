/*本题思路：运用两层嵌套循环，第一层记录投给k的票数
	第二层记录总天数，最后比较并输出结果。
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

//本题总结：整数除法向下取整，故需要考虑奇偶不同的情况
