#include <bits/stdc++.h>
using namespace std;
#define ll long long
int limit = 1000005;
int main()
{
	int prime[1000005];
	fill_n(prime, 1000005, 1);
    for (int i=2;i*i<limit;i++)
    {
        if (prime[i])
        {
            for (int j=i*2;j<limit;j+=i)
                prime[j] = 0;
        }
    }

	ll n; cin>>n; ll a[n],i=0;
	for(i=0;i<n;i++){
		cin>>a[i];
		int x= sqrt(a[i]);
		if(a[i]==1)
			cout<<"NO"<<endl;
		else if((x*x==a[i])&&(prime[x]))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return(0);
}