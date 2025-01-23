#include<iostream>
#include <string.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	char num[61];
	for(i=0;i<n;i++)
	{
		cin>>num;
		if((num[strlen(num)-1]-'0')%2==1)
		cout<<"odd"<<endl;
		else
		cout<<"even"<<endl;
	}
	return 0;
}
