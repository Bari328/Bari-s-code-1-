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
			s.push(a[i]);
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
