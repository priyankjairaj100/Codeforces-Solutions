#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,r; cin>>k>>r;int rem;
	for(int i=1;i<=10;i++){
		rem=(k*i)%10;
		if ((rem==r)||(rem==0)){
			cout<<i<<endl;
			return(0);
		}
	}
	return(0);
}