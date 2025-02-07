本题思路：常规思路：暴力解法两次循环遍历时间复杂度o（n^2）
	遂想要优化算法。
	优化思路：向右看齐说明在一定区间内升高是类递减的
		那么有极大可能相邻的类递减数的仰望对象是相同的
		所以利用栈的后进先出的特点优化算法。
#include<iostream>
#include<stack>
using namespace std;
struct cow{
	int h;
	int num;	
};
int main()
{
	
	cow a[100005];
	int ans[100005];
	int n;
	cin>>n;
	int i;
	for(i=1;i<=n;i++)
	{
		cin>>a[i].h;
		a[i].num=i;
	}
	stack <cow> s;
	for(i=1;i<=n;i++)
	{
		if(s.empty()||s.top().h>=a[i].h){
			s.push(a[i]);
		}
		else
		{
			while(!s.empty()&&s.top().h<a[i].h){
				ans[s.top().num]=a[i].num;
				s.pop();
			}
			s.push(a[i]);//标注一处地点
		}
	}
	while(!s.empty())
	{
		ans[s.top().num]=0;
		s.pop();
	}
	for(i=1;i<=n;i++)
	{
		cout<<ans[i]<<endl;
	}
	return 0;
}
本题反思：要记得删元素啊，还有记得s.push(a[i]);
