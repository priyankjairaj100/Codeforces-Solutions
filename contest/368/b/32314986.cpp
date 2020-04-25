/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long
#define el "\n"
int n,m,a[100001],l,v[100001],q[100002],i;
ll modl(const ll input, const ll ceil) {
    return input >= ceil ? input % ceil : input;}

int main()
{
	cin>>n>>m;
	for (i = 1; i<=n; i++) cin>>a[i];
	for (i = n; i> 0; i--) q[i] = q[i+1] + (v[a[i]]++?0:1);
	for (i = 0; i < m; i++)
	{
		cin >> l;
		cout << q[l] << el;
	}
	return 0;
}