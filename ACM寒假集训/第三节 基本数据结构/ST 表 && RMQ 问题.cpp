#include<bits/stdc++.h>
using namespace std;
const int N=5e6;
int smax[N][31],log_2[N]; 
inline int read()
{
	int x=0,f=1;char ch=getchar();
	while (ch<'0'||ch>'9'){if (ch=='-') f=-1;ch=getchar();}
	while (ch>='0'&&ch<='9'){x=x*10+ch-48;ch=getchar();}
	return x*f;
}
int main(){
	int n,m;
	n=read(),m=read();
	log_2[1]=0;
	int i,j;
	for(i=2;i<=n;i++){
		log_2[i]=log_2[i/2]+1;
	}
	for(i=1;i<=n;i++){
		smax[i][0]=read();
	}
	for(j=1;j<=log_2[n];j++){
		for(i=1;i+(1<<j)-1<=n;i++){
			smax[i][j]=max(smax[i][j-1],smax[i+(1<<(j-1))][j-1]);
		}
	}
	int l,r;
	for(i=1;i<=m;i++)
	{
		l=read(),r=read();
		int s=log_2[r-l+1];
		printf("%d\n",max(smax[l][s],smax[r-(1<<s)+1][s]));	
	}
	return 0;
} 
