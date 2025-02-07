#include<iostream>
#include<queue> 
using namespace std;
priority_queue<int> q;
int main()
{
	string str;
	cin>>str;
	while(str!="end")
	{
		
		if(str=="insert")
		{	
			int k;
			cin>>k;
			q.push(k);
		}	
		else if(str=="extract")
		{
			cout<<q.top()<<endl;
			q.pop();
		}
		cin>>str;
	}
	return 0;
}
