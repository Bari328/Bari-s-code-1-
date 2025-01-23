/*本题思路：法一：暴力交换，通过对每排/列每个元素的交换实现。
	法二：给每个数字编上行号和列号。每个数字对应的行号与列号在交换过程中并不会发生改变
		利用这点，创建两个数组，通过行号和列号代表对应行和列的改变，最后通过行号与列号准确输出对应数字
#include<iostream>
#include <string.h>
#include<algorithm>
using namespace std;
int main()
{
	int arr[1000][1000];
	int n,m,i,j,p[1000],q[1000];
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		q[i]=p[i]=i;
		for(j=0;j<n;j++)
			cin>>arr[i][j];
	}
	for(i=0;i<m;i++)
	{
		int op,x,y;
		cin>>op>>x>>y;
		if(op) swap(p[x-1],p[y-1]);
		else	swap(q[x-1],q[y-1]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cout<<arr[p[i]][q[j]]<<' ';
		cout<<endl;
	}
	return 0;
}
 本题总结：代号法可极大地减小时间复杂度，同时也是代码更加巧妙与简洁。
