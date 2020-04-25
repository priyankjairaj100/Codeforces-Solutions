/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long
const long long M=998244353;

long long C(int n, int r) {
    if(r>n/2) r=n-r;
    long long ans = 1;
    int i;

    for(i=1;i<=r;i++)
    {
        ans*=n-r+i;
        ans/=i;
    }

    return ans;
}
ll f(ll n)
{
	ll ans=1;
	for (int i = 1; i <=n; ++i)
	{
		ans*=i;
	}
	return ans;
}

ll calc(ll a, ll b)
{
	ll m1=min(a,b),ans=0;
	for (int i = 0; i <=m1; ++i)
	{
		ans+=C(a,i)*C(b,i)*f(i);
	}
	return ans;
}

int main()
{
	ll a,b,c;
	cin>>a>>b>>c;
	cout<<((((calc(a,b)%M) *(calc(b,c)%M))%M) *(calc(a,c)%M))%M<<endl;	
	return(0);
}