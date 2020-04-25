#include<bits/stdc++.h>
using namespace std;
int a[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
int main()
{
	int n,i=0; cin>>n;
	while(a[i]<=n){
		if(n%a[i]==0)
		{
			cout<<"YES"<<endl;
			return(0);
		}
		i++;
		if(i==14)
			break;
	}
	cout<<"NO"<<endl;
	return(0);
}