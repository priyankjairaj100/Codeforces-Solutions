/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long

int main()
{
	ll n,k; cin>>n>>k;
	ll p[n],q[n],r[n];
	cin>>p[0];
	q[0]=p[0];
	r[0]=1;
	if(k==1){
		cout<<p[0]<<endl;
		return(0);
	}
	for (int i = 1; i < n; ++i)
	{
		r[i]=1;
		cin>>p[i];
		if(p[i]>p[i-1]){
			q[i]=p[i];
		}
		else{
			q[i]=q[i-1];
			r[i]=r[i-1]+1;
		}
		//cout<<q[i]<<"   "<<r[i]<<endl;
		if(r[i]==k){
			cout<<q[i]<<endl;
			return(0);
		}
	}
	cout<<q[n-1]<<endl;
	return(0);
}