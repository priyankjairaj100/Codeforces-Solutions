/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long
#define el "\n"
ll modl(const ll input, const ll ceil) {
    return input >= ceil ? input % ceil : input;}
#define fr(i,n) for(ll i=0;i<n;++i)
#define fr1(i,n) for(ll i=1;i<=n;++i)
bool myfn(int i, int j) { return i < j; }

ll gcd(ll a, ll b)
{

    if (a == 0 || b == 0)
        return 0;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
ll dp[400009];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n; cin>>n; ll arr[n+5];
    for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	if(n==1){
		cout<<arr[0]<<endl;
		return 0;
	} ll sum = 0;
	sort(arr, arr+n);
	sum=arr[n-1]-arr[0];
    for (int i=1;i<n-1;i++)sum+=abs(arr[i]);
	cout<<sum<<endl;
	return 0;
}