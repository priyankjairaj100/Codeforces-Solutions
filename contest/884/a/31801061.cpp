/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long


int main() {
	int n,t;
	cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
 
	}
	int c,i=0;
	while(t>0)
	{
		c=86400-a[i];
		t=t-c;
		i++;
 
	}
	cout<<i;
	return 0;
}