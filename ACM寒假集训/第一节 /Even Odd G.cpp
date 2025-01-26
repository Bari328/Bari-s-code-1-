/*本体思路：以循环语句为主题进行n次的奇数偶数选择*/
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
//num【】为字符数组需用-’0‘将其转化为数字从而进行整除运算。
