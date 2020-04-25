#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf INT_MAX
long long int mx=-inf;
const int asize= 100005;
int main(){
	ll n;
	ll arr[asize];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>mx)mx=arr[i];
	}
	ll sum=0;
    for(int i=0;i<n;i++)
	{
		sum+=(mx-arr[i]);
	}
	cout<<sum<<endl;

	return 0;
}