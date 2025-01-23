#include<iostream>
using namespace std;
int main()
{
	int n,N[1000]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		char str[4];
		cin>>str;
		if((str[0]=='y'||str[0]=='Y')&&(str[1]=='e'||str[1]=='E')&&(str[2]=='s'||str[2]=='S'))
			N[i]=1;
		else
			N[i]=0;
	}
	for(int i=0;i<n;i++)
	{	if(N[i]==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}	
	return 0;
}
