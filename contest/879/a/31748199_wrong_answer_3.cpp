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
	int n; cin>>n; int ds=0;
	for(int i=1;i<=n;i++)
	{
		double s,d; cin>>s>>d;
		if(i==1)
		{
			ds=s;
		}
		else
		{
		    double k=ceil((ds-s)/d);
		    if((ds-s)/d==floor((ds-d)/d))
		        k++;
			ds=s+(k*d);
		}
	}
	cout<<ds<<endl;
	return(0);
}