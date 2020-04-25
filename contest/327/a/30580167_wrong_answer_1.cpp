#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n; int a[n+1];
	int c=0,max=0,oc=0;
	while(n--)
	{
		cin>>a[n];
		if((n==0)&&(a[n]==1)){
			cout<<"0"<<endl;
			return(0);
		}
		if(a[n]==0){
			c++;
			if(c>max)
				max=c;
		}
		else{
			c=0;
			oc++;
		}
	}
	cout<<max+oc<<endl;
	return(0);
}