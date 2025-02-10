#include<iostream>
using namespace std;
#define ll long long
const ll MOD = 19260817;
ll gcd(ll a,ll b){
	return b=b?gcd(b,a%b):a; 
}
ll modExp(ll a,ll b,ll mod){
	ll res=1;
	a%=mod;
	while(b>0){
		if(b&1)
			res=(res*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return res;
}
inline void read(long long &x){
	int f=1;x=0;char s=getchar();
	while(s>'9'||s<'0'){if(s=='-')f=-1;s=getchar();}
	while(s<='9'&&s>='0'){x=x*10%MOD+(s-'0')%MOD;s=getchar();}//改成了取模~~
    x=x%MOD*f;//改成了取模~
}
int main(){
	ll a,b;
	read(a),read(b);
	if(gcd(b,MOD)!=1){
		cout<<"Angry!"<<endl;
	}else{
		ll inv_b=modExp(b,MOD-2,MOD);
		ll res=1LL * a * inv_b % MOD;
		cout<<res;
	}
		
	return 0;	
}
